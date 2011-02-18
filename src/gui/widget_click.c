/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "../pool/structure.h"
#include "../pool/unit.h"
#include "../structure.h"
#include "../unit.h"
#include "widget.h"
#include "../unknown/unknown.h"
#include "../tile.h"
#include "../map.h"
#include "../sprites.h"

extern void f__01F7_286D_0023_9A13();
extern void f__2B4C_0002_0029_64AF();
extern void f__B4E9_0050_003F_292A();
extern void f__B520_08E6_0038_85A4();
extern void f__B520_096E_003C_F7E4();
extern void overlay(uint16 cs, uint8 force);

/**
 * Handles scrolling of a scrollbar.
 *
 * @param scrollbar The scrollbar.
 * @param scroll The amount of scrolling.
 */
void GUI_Widget_Scrollbar_Scroll(WidgetScrollbar *scrollbar, uint16 scroll, csip32 scrollbarcsip)
{
	scrollbar->scrollPosition += scroll;

	if ((int16)scrollbar->scrollPosition >= scrollbar->scrollMax - scrollbar->scrollPageSize) {
		scrollbar->scrollPosition = scrollbar->scrollMax - scrollbar->scrollPageSize;
	}

	if ((int16)scrollbar->scrollPosition <= 0) scrollbar->scrollPosition = 0;

	emu_push(scrollbarcsip.s.cs); emu_push(scrollbarcsip.s.ip);
	emu_push(emu_cs); emu_push(0x068C); f__B520_096E_003C_F7E4();
	emu_sp += 4;

	GUI_Widget_ScrollBar_Draw((Widget *)emu_get_memorycsip(scrollbar->parent));
}

/**
 * Handles Click event for a sprite/text button.
 *
 * @param w The widget.
 * @return False, always.
 */
bool GUI_Widget_SpriteTextButton_Click(Widget *w)
{
	Structure *s;

	VARIABLE_NOT_USED(w);

	s = Structure_Get_ByPackedTile(g_global->selectionPosition);

	switch (g_global->productionStringID) {
		default: break;

		case 0x26: /* "Place it" */
			if (s->o.type == STRUCTURE_CONSTRUCTION_YARD) {
				Structure *ns;

				ns = Structure_Get_ByIndex(s->o.linkedID);
				g_global->activeStructure = g_global->structureStartPos;
				g_global->activeStructure.s.ip += ns->o.index * sizeof(Structure);
				g_global->activeStructureType = s->objectType;
				g_global->variable_38EC = Structure_IsValidBuildLocation(g_global->variable_3A00, g_global->activeStructureType);
				g_global->activeStructurePosition = g_global->selectionPosition;
				s->o.linkedID = STRUCTURE_INVALID;

				emu_push(2);
				emu_push(emu_cs); emu_push(0x111E); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
				emu_sp += 2;
			}
			break;

		case 0x28: /* "On hold" */
			s->o.flags.s.repairing = false;
			s->o.flags.s.onHold    = false;
			s->o.flags.s.upgrading = false;
			break;

		case 0x29: /* "Build it" */
			Structure_BuildObject(s, s->objectType);
			break;

		case 0x2A: /* "Launch" */
		case 0x2B: /* "Fremen" */
		case 0x2C: /* "Saboteur" */
			Structure_ActivateSpecial(s);
			break;

		case 0x2E: /* "%d%% done" */
			s->o.flags.s.onHold = true;
			break;
	}
	return false;
}

/**
 * Handles Click event for scrollbar up button.
 *
 * @param w The widget.
 * @return False, always.
 */
bool GUI_Widget_Scrollbar_ArrowUp_Click(Widget *w)
{
	GUI_Widget_Scrollbar_Scroll((WidgetScrollbar *)emu_get_memorycsip(w->scrollbar), -1, w->scrollbar);

	return false;
}

/**
 * Handles Click event for scrollbar down button.
 *
 * @param w The widget.
 * @return False, always.
 */
bool GUI_Widget_Scrollbar_ArrowDown_Click(Widget *w)
{
	GUI_Widget_Scrollbar_Scroll((WidgetScrollbar *)emu_get_memorycsip(w->scrollbar), 1, w->scrollbar);

	return false;
}

/**
 * Handles Click event for scrollbar button.
 *
 * @param w The widget.
 * @return False, always.
 */
bool GUI_Widget_Scrollbar_Click(Widget *w)
{
	WidgetScrollbar *scrollbar;
	uint16 positionX, positionY;

	scrollbar = (WidgetScrollbar *)emu_get_memorycsip(w->scrollbar);

	positionX = w->offsetX;
	if (w->offsetX < 0) positionX += g_global->variable_4062[w->parentID][2] << 3;
	positionX += g_global->variable_4062[w->parentID][0] << 3;

	positionY = w->offsetY;
	if (w->offsetY < 0) positionY += g_global->variable_4062[w->parentID][3];
	positionY += g_global->variable_4062[w->parentID][1];

	if ((w->state.s.buttonState & 0x44) != 0) {
		scrollbar->pressed = 0;
		GUI_Widget_ScrollBar_Draw(w);
	}

	if ((w->state.s.buttonState & 0x11) != 0) {
		int16 positionCurrent;
		int16 positionBegin;
		int16 positionEnd;

		scrollbar->pressed = 0;

		if (w->width > w->height) {
			positionCurrent = g_global->mouseX;
			positionBegin = positionX + scrollbar->position + 1;
		} else {
			positionCurrent = g_global->mouseY;
			positionBegin = positionY + scrollbar->position + 1;
		}

		positionEnd = positionBegin + scrollbar->size;

		if (positionCurrent <= positionEnd && positionCurrent >= positionBegin) {
			scrollbar->pressed = 1;
			scrollbar->pressedPosition = positionCurrent - positionBegin;
		} else {
			GUI_Widget_Scrollbar_Scroll(scrollbar, (positionCurrent < positionBegin ? -scrollbar->scrollPageSize : scrollbar->scrollPageSize), w->scrollbar);
		}
	}

	if ((w->state.s.buttonState & 0x22) != 0 && scrollbar->pressed != 0) {
		int16 position, size;

		if (w->width > w->height) {
			size = w->width - 2 - scrollbar->size;
			position = g_global->mouseX - scrollbar->pressedPosition - positionX - 1;
		} else {
			size = w->height - 2 - scrollbar->size;
			position = g_global->mouseY - scrollbar->pressedPosition - positionY - 1;
		}

		if (position < 0) {
			position = 0;
		} else if (position > size) {
			position = size;
		}

		if (scrollbar->position != position) {
			scrollbar->position = position;
			scrollbar->dirty = 1;
		}

		emu_push(w->scrollbar.s.cs); emu_push(w->scrollbar.s.ip);
		emu_push(emu_cs); emu_push(0x0605); emu_cs = 0xB520; f__B520_08E6_0038_85A4();
		emu_sp += 4;

		if (scrollbar->dirty != 0) GUI_Widget_ScrollBar_Draw(w);
	}

	return false;
}

/**
 * Handles Click event for unit commands button.
 *
 * @param w The widget.
 * @return True, always.
 */
bool GUI_Widget_TextButton_Click(Widget *w)
{
	ActionType action;
	Unit *u;
	UnitInfo *ui;
	uint16 *actions;
	csip32 acsip;
	csip32 loc08;
	ActionType unitAction;
	ActionInfo *ai;

	u = Unit_Get_ByMemory(g_global->selectionUnit);
	ui = &g_unitInfo[u->o.type];

	actions = ui->o.actionsPlayer;
	acsip.s.cs = 0x2D07;
	acsip.s.ip = u->o.type * sizeof(UnitInfo) + 0x22;

	if (Unit_GetHouseID(u) != g_global->playerHouseID) {
		if (u->o.type != UNIT_SIEGE_TANK) {
			actions = g_global->actionsAI;
			acsip.s.cs = 0x353F;
			acsip.s.ip = 0x3C2A;
		}
	}

	action = actions[w->index - 8];

	unitAction = u->nextActionID;
	if (unitAction == ACTION_INVALID) {
		unitAction = u->actionID;
	}

	if (u->deviated != 0) {
		Unit_Deviation_Decrease(u, 5);
		if (u->deviated == 0) {
			GUI_Widget_MakeNormal(w, false);
			return true;
		}
	}

	GUI_Widget_MakeSelected(w, false);

	ai = &g_actionInfo[action];

	if (ai->variable_08 != g_global->selectionType) {
		g_global->activeUnit = g_global->selectionUnit;
		g_global->activeAction = action;
		emu_push(ai->variable_08);
		emu_push(emu_cs); emu_push(0x1DC3); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
		emu_sp += 2;

		return true;
	}

	Object_Script_Variable4_Clear(&u->o);
	u->targetAttack = 0;
	u->targetMove = 0;
	u->variable_72[0] = 0xFF;

	Unit_SetAction(u, action);

	if (ui->movementType == MOVEMENT_FOOT) {
		emu_push(ai->variable_08);
		emu_push(emu_cs); emu_push(0x1E39); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0156();
		emu_sp += 2;
	}

	if (unitAction == action) return true;

	emu_push(4);
	emu_push(unitAction);
	emu_push(acsip.s.cs); emu_push(acsip.s.ip);
	emu_push(emu_cs); emu_push(0x1E4E); emu_cs = 0x01F7; f__01F7_286D_0023_9A13();
	emu_sp += 8;

	loc08.s.cs = emu_dx;
	loc08.s.ip = emu_ax;
	if (loc08.csip == 0) return true;

	GUI_Widget_MakeNormal(GUI_Widget_Get_ByIndex((Widget *)emu_get_memorycsip(g_global->variable_3C26), loc08.s.ip - acsip.s.ip + 8), false);

	return true;
}

/**
 * Handles Click event for current selection name.
 *
 * @return False, always.
 */
bool GUI_Widget_Name_Click()
{
	Object *o;
	uint16 packed;

	o = Object_GetByPackedTile(g_global->selectionPosition);

	if (o == NULL) return false;

	packed = Tile_PackTile(o->position);

	Map_SetViewportPosition(packed);
	Map_SetSelection(packed);

	return false;
}

/**
 * Handles Click event for "Cancel" button.
 *
 * @return True, always.
 */
bool GUI_Widget_Cancel_Click()
{
	if (g_global->activeStructureType != 0xFFFF) {
		Structure *s  = Structure_Get_ByPackedTile(g_global->activeStructurePosition);
		Structure *s2 = Structure_Get_ByMemory(g_global->activeStructure);

		assert(s2 != NULL);

		if (s != NULL) {
			s->o.linkedID = s2->o.index & 0xFF;
		} else {
			Structure_Free(s2);
		}

		g_global->activeStructure.csip = 0x0;
		g_global->activeStructurePosition = 0xFFFF;

		emu_push(4);
		emu_push(emu_cs); emu_push(0x103A); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
		emu_sp += 2;

		g_global->variable_38EC = 0;
	}

	if (g_global->activeUnit.csip == 0x0) return true;

	g_global->activeUnit.csip = 0x0;
	g_global->activeAction = 0xFFFF;
	g_global->cursorSpriteID = 0;

	emu_push(g_sprites[0].s.cs); emu_push(g_sprites[0].s.ip);
	emu_push(0);
	emu_push(0);
	emu_push(emu_cs); emu_push(0x107C); emu_cs = 0x2B4C; f__2B4C_0002_0029_64AF();
	emu_sp += 8;

	emu_push(3);
	emu_push(emu_cs); emu_push(0x1088); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
	emu_sp += 2;

	return true;
}

/**
 * Handles Click event for current selection picture.
 *
 * @return False, always.
 */
bool GUI_Widget_Picture_Click()
{
	Structure *s;

	if (g_global->selectionUnit.csip != 0x0) {
		Unit *u = Unit_Get_ByMemory(g_global->selectionUnit);

		Unit_DisplayStatusText(u);

		return false;
	}

	s = Structure_Get_ByPackedTile(g_global->selectionPosition);

	if (s == NULL || !g_structureInfo[s->o.type].o.flags.s.factory) return false;

	Structure_BuildObject(s, 0xFFFF);

	return false;
}

/**
 * Handles Click event for "Repair/Upgrade" button.
 *
 * @param w The widget.
 * @return False, always.
 */
bool GUI_Widget_RepairUpgrade_Click(Widget *w)
{
	Structure *s;

	s = Structure_Get_ByPackedTile(g_global->selectionPosition);

	if (Structure_SetRepairingState(s, -1, w)) return false;
	Structure_SetUpgradingState(s, -1, w);

	return false;
}
