/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "gui.h"

/**
 * Emulator wrapper around GUI_EditBox().
 *
 * @name emu_GUI_DrawWiredRectangle
 * @implements 251B:0000:001E:7202 ()
 * @implements 251B:001E:001A:4EC8
 * @implements 251B:0038:0016:F082
 * @implements 251B:004E:001A:83C7
 * @implements 251B:0068:0007:CF07
 */
void emu_GUI_DrawWiredRectangle()
{
	uint16 left, top;
	uint16 right, bottom;
	uint16 colour;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	left   = emu_get_memory16(emu_ss, emu_sp, 0x0);
	top    = emu_get_memory16(emu_ss, emu_sp, 0x2);
	right  = emu_get_memory16(emu_ss, emu_sp, 0x4);
	bottom = emu_get_memory16(emu_ss, emu_sp, 0x6);
	colour = emu_get_memory16(emu_ss, emu_sp, 0x8);

	GUI_DrawWiredRectangle(left, top, right, bottom, colour);
}