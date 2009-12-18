/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_GUI_Name()
 *
 * @name emu_GUI_Name
 * @implements 0AEC:0005:0010:9634 ()
 * @implements 0AEC:0015:001F:3C46
 * @implements 0AEC:0034:000A:5A66
 * @implements 0AEC:003E:0007:0BB0
 * @implements 0AEC:0045:0005:EAF1
 * @implements 0AEC:004A:0005:8BCF
 *
 * Called From: B4A2:06AC:0030:38D3
 */
void emu_GUI_Name()
{
l__0005:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A02));
	emu_push(emu_cs); emu_push(0x0015); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1086_0040_F11C();
l__0015:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0046; emu_last_cs = 0x0AEC; emu_last_ip = 0x0022; emu_last_length = 0x001F; emu_last_crc = 0x3C46; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0034); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__0034:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x003E); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1178_000D_B1D5();
l__003E:
	emu_pop(&emu_cx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0045); emu_cs = 0x0F78; emu_Map_SetSelection();
l__0045:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__004A;
l__004A:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_GUI_Cancel()
 *
 * @name emu_GUI_Cancel
 * @implements 0AEC:0FD8:0017:6202 ()
 * @implements 0AEC:0FEF:0021:7407
 * @implements 0AEC:101F:001B:5BA9
 * @implements 0AEC:103A:0042:BBAB
 * @implements 0AEC:1041:003B:40DA
 * @implements 0AEC:107C:000C:379D
 * @implements 0AEC:1088:0006:B1FB
 * @implements 0AEC:1089:0005:D5FA
 * @implements 0AEC:108E:0005:8BCF
 *
 * Called From: B4A2:06AC:0030:38D3
 */
void emu_GUI_Cancel()
{
l__0FD8:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38E2), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x38E2) == 0xFFFF) goto l__1041;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38F0));
	emu_push(emu_cs); emu_push(0x0FEF); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_Get_ByPackedTile();
l__0FEF:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x1010; emu_last_cs = 0x0AEC; emu_last_ip = 0x0FFC; emu_last_length = 0x0021; emu_last_crc = 0x7407; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ds, 0x00, 0x38E4));
	emu_al = emu_get_memory8(emu_es, emu_si, 0x0);
	emu_pop(&emu_es);
	emu_get_memory8(emu_es, emu_bx, 0x3) = emu_al;
	goto l__101F;
l__101F:
	emu_get_memory16(emu_ds, 0x00, 0x38E6) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38E4) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38E2) = 0xFFFF;
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x103A); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
l__103A:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x38EC) = 0x0;
l__1041:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38F2);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38F4));
	if (emu_ax == 0) goto l__1089;
	emu_get_memory16(emu_ds, 0x00, 0x38F4) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38F2) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38F6) = 0xFFFF;
	emu_get_memory16(emu_ds, 0x00, 0x3A34) = 0x0;
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, 0x00, 0x442));
	emu_push(emu_get_memory16(emu_es, 0x00, 0x440));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x107C); emu_cs = 0x2B4C; f__2B4C_0002_0029_64AF();
l__107C:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1088); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
l__1088:
	emu_pop(&emu_cx);
l__1089:
	emu_ax = 0x1;
	goto l__108E;
l__108E:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_GUI_BuildPlace()
 *
 * @name emu_GUI_BuildPlace
 * @implements 0AEC:1093:000F:2295 ()
 * @implements 0AEC:10A2:0016:DDD2
 * @implements 0AEC:10B8:0007:A0A5
 * @implements 0AEC:10BF:0018:52CC
 * @implements 0AEC:10D7:002B:C27D
 * @implements 0AEC:1102:001C:5E7F
 * @implements 0AEC:111E:0003:E81A
 * @implements 0AEC:1121:000B:597F
 * @implements 0AEC:112C:0013:430C
 * @implements 0AEC:113F:0012:7EA1
 * @implements 0AEC:1151:0005:8C6E
 * @implements 0AEC:1156:000B:1C58
 * @implements 0AEC:1161:0004:5A1F
 * @implements 0AEC:1165:0002:C03A
 * @implements 0AEC:1167:0004:E839
 * @implements 0AEC:116B:0004:893F
 *
 * Called From: B4A2:06AC:0030:38D3
 */
void emu_GUI_BuildPlace()
{
l__1093:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A02));
	emu_push(emu_cs); emu_push(0x10A2); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_Get_ByPackedTile();
l__10A2:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x97E5);
	emu_subw(&emu_bx, 0x26);
	emu_cmpw(&emu_bx, 0x8);
	if (emu_bx <= 0x8) goto l__10B8;
	goto l__1165;
l__10B8:
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x116F);
	switch (emu_ip) {
		case 0x10BF: goto l__10BF;
		case 0x1121: goto l__1121;
		case 0x112C: goto l__112C;
		case 0x113F: goto l__113F;
		case 0x1156: goto l__1156;
		case 0x1165: goto l__1165;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x0AEC; emu_last_ip = 0x10BA; emu_last_length = 0x0007; emu_last_crc = 0xA0A5;
			emu_call();
			return;
	}
l__10BF:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x8) { /* Unresolved jump */ emu_ip = 0x111F; emu_last_cs = 0x0AEC; emu_last_ip = 0x10C7; emu_last_length = 0x0018; emu_last_crc = 0x52CC; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x10D7); emu_cs = 0x1082; emu_Structure_Get_ByIndex();
l__10D7:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_get_memory16(emu_ds, 0x00, 0x38E6) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x38E4) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4C);
	emu_get_memory16(emu_ds, 0x00, 0x38E2) = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38E2));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A00));
	emu_push(emu_cs); emu_push(0x1102); emu_cs = 0x0C3A; emu_Structure_IsValidBuildLocation();
l__1102:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x38EC) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A02);
	emu_get_memory16(emu_ds, 0x00, 0x38F0) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x3) = 0xFF;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x111E); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
l__111E:
	emu_pop(&emu_cx);
	goto l__1167;
l__1121:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4000);
	goto l__1167;
l__112C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x9FFF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0xFFFD);
	goto l__1167;
l__113F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1151); emu_cs = 0x0C3A; f__0C3A_142D_0018_6667();
l__1151:
	emu_addw(&emu_sp, 0x6);
	goto l__1167;
l__1156:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1161); emu_cs = 0x1423; f__1423_04F2_0016_CD6B();
l__1161:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__1167;
l__1165:
	goto l__1167;
l__1167:
	emu_xorw(&emu_ax, emu_ax);
	goto l__116B;
l__116B:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_GUI_Picture()
 *
 * @name emu_GUI_Picture
 * @implements 0AEC:1181:001C:DFE4 ()
 * @implements 0AEC:11A1:0009:6093
 * @implements 0AEC:11AA:0041:E018
 * @implements 0AEC:11EB:0007:F90C
 * @implements 0AEC:11F2:0004:893F
 *
 * Called From: B4A2:06AC:0030:38D3
 */
void emu_GUI_Picture()
{
l__1181:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A0A);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	if (emu_ax == 0) goto l__11A1;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_push(emu_cs); emu_push(0x119D); emu_cs = 0x1A34; f__1A34_27A8_0012_7198();
	/* Unresolved jump */ emu_ip = 0x119D; emu_last_cs = 0x0AEC; emu_last_ip = 0x119D; emu_last_length = 0x001C; emu_last_crc = 0xDFE4; emu_call();
l__11A1:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A02));
	emu_push(emu_cs); emu_push(0x11AA); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_Get_ByPackedTile();
l__11AA:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x11EE; emu_last_cs = 0x0AEC; emu_last_ip = 0x11B7; emu_last_length = 0x0041; emu_last_crc = 0xE018; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0xC) & 0x2) == 0) { /* Unresolved jump */ emu_ip = 0x11EE; emu_last_cs = 0x0AEC; emu_last_ip = 0x11DA; emu_last_length = 0x0041; emu_last_crc = 0xE018; emu_call(); return; }
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x11EB); emu_cs = 0x0C3A; f__0C3A_142D_0018_6667();
l__11EB:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	goto l__11F2;
l__11F2:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_GUI_RepairUpgrade()
 *
 * @name emu_GUI_RepairUpgrade
 * @implements 0AEC:11F6:000F:2195 ()
 * @implements 0AEC:1205:001C:6F1D
 * @implements 0AEC:1221:001C:8D4B
 * @implements 0AEC:123D:0007:F96C
 * @implements 0AEC:1240:0004:E839
 * @implements 0AEC:1244:0004:893F
 *
 * Called From: B4A2:06AC:0030:38D3
 */
void emu_GUI_RepairUpgrade()
{
l__11F6:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A02));
	emu_push(emu_cs); emu_push(0x1205); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_Get_ByPackedTile();
l__1205:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1221); emu_cs = 0x0C3A; f__0C3A_2814_0015_76F0();
l__1221:
	emu_addw(&emu_sp, 0xA);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__1240;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x123D); emu_cs = 0x0C3A; f__0C3A_2714_0015_B6F6();
l__123D:
	emu_addw(&emu_sp, 0xA);
l__1240:
	emu_xorw(&emu_ax, emu_ax);
	goto l__1244;
l__1244:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
