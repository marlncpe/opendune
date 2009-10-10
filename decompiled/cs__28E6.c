/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__28E6_000A_0040_D751()
 *
 * @name f__28E6_000A_0040_D751
 * @implements 28E6:000A:0040:D751 ()
 *
 * Called From: B52A:06DC:0063:6B7E
 * Called From: B52A:06DC:005B:E187
 * Called From: B52A:06DC:006C:C807
 */
void f__28E6_000A_0040_D751()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x16);
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_andw(&emu_bx, 0x3);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_get_memory16(emu_cs, emu_bx, 0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0x10), 0x2);
	if (!emu_flags.zf) {
		emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6F20));
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax);
		emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6F1E));
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
		emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x16));
		emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x16), emu_al);
	}
	f__28E6_0041_0009_2106(); return;
}

/**
 * Decompiled function f__28E6_0041_0009_2106()
 *
 * @name f__28E6_0041_0009_2106
 * @implements 28E6:0041:0009:2106 ()
 *
 * Called From: 28E6:002D:0040:D751
 */
void f__28E6_0041_0009_2106()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x004A); emu_cs = 0x252E; f__252E_001B_0018_EA2C();
	f__28E6_004A_0044_5F17();
}

/**
 * Decompiled function f__28E6_004A_0044_5F17()
 *
 * @name f__28E6_004A_0044_5F17
 * @implements 28E6:004A:0044:5F17 ()
 *
 */
void f__28E6_004A_0044_5F17()
{
	emu_addw(&emu_sp, 0x2);
	emu_movw(&emu_es, emu_dx);
	emu_movw(&emu_si, 0x4062);
	emu_movb(&emu_cl, 0x4);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_si, emu_ax);
	emu_movb(&emu_cl, 0x3);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_si, 0x0));
	emu_shlw(&emu_ax, emu_cl);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_si, 0x4));
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_si, 0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_si, 0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.sf) { f__28E6_009C_006D_1A9D(); return; }
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x008E; emu_last_cs = 0x28E6; emu_last_ip = 0x0089; emu_last_length = 0x0044; emu_last_crc = 0x5F17; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0117; emu_last_cs = 0x28E6; emu_last_ip = 0x008B; emu_last_length = 0x0044; emu_last_crc = 0x5F17; emu_call();
}

/**
 * Decompiled function f__28E6_009C_006D_1A9D()
 *
 * @name f__28E6_009C_006D_1A9D
 * @implements 28E6:009C:006D:1A9D ()
 *
 * Called From: 28E6:0084:0044:5F17
 */
void f__28E6_009C_006D_1A9D()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x008B; emu_last_cs = 0x28E6; emu_last_ip = 0x00A2; emu_last_length = 0x006D; emu_last_crc = 0x1A9D; emu_call(); return; }
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x008B; emu_last_cs = 0x28E6; emu_last_ip = 0x00A4; emu_last_length = 0x006D; emu_last_crc = 0x1A9D; emu_call(); return; }
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.cf) {
		emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xC), emu_ax);
	}
	f__28E6_00AE_005B_3EBC(); return;
}

/**
 * Decompiled function f__28E6_00AE_005B_3EBC()
 *
 * @name f__28E6_00AE_005B_3EBC
 * @implements 28E6:00AE:005B:3EBC ()
 *
 * Called From: 28E6:00A9:006D:1A9D
 */
void f__28E6_00AE_005B_3EBC()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.sf) {
		emu_negw(&emu_ax, emu_ax);
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
		emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_ax);
		emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_ax);
	}
	f__28E6_00C6_0043_9B9B(); return;
}

/**
 * Decompiled function f__28E6_00C6_0043_9B9B()
 *
 * @name f__28E6_00C6_0043_9B9B
 * @implements 28E6:00C6:0043:9B9B ()
 *
 * Called From: 28E6:00B9:005B:3EBC
 */
void f__28E6_00C6_0043_9B9B()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (emu_flags.sf) { /* Unresolved jump */ emu_ip = 0x008B; emu_last_cs = 0x28E6; emu_last_ip = 0x00D1; emu_last_length = 0x0043; emu_last_crc = 0x9B9B; emu_call(); return; }
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x008B; emu_last_cs = 0x28E6; emu_last_ip = 0x00D3; emu_last_length = 0x0043; emu_last_crc = 0x9B9B; emu_call(); return; }
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (emu_flags.cf) {
		emu_xchgw(&emu_get_memory16(emu_ss, emu_bp,  0xA), &emu_ax);
		emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	}
	f__28E6_00E3_0026_C006(); return;
}

/**
 * Decompiled function f__28E6_00E3_0026_C006()
 *
 * @name f__28E6_00E3_0026_C006
 * @implements 28E6:00E3:0026:C006 ()
 *
 * Called From: 28E6:00D8:0043:9B9B
 */
void f__28E6_00E3_0026_C006()
{
	emu_push(emu_si);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_ds, emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_shlw(&emu_bx, 0x1);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ds, 0x00, 0x66EC));
	emu_movw(&emu_di, emu_get_memory16(emu_ds, emu_bx + emu_si, 0x0));
	emu_pop(&emu_ds);
	emu_pop(&emu_si);
	emu_addw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_di);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xC));
	f__28E6_0100_0009_9E6A(); return;
}

/**
 * Decompiled function f__28E6_0100_0009_9E6A()
 *
 * @name f__28E6_0100_0009_9E6A
 * @implements 28E6:0100:0009:9E6A ()
 *
 * Called From: 28E6:0115:001A:077C
 */
void f__28E6_0100_0009_9E6A()
{
	emu_addw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_cx, emu_get_memory16(emu_ss, emu_bp,  0xA));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_push(0x0109);
	switch (emu_ip) {
		case 0x0123: f__28E6_0123_000A_333D(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x28E6; emu_last_ip = 0x0106; emu_last_length = 0x0009; emu_last_crc = 0x9E6A;
			emu_call();
			return;
	}
	f__28E6_0109_001A_077C();
}

/**
 * Decompiled function f__28E6_0109_001A_077C()
 *
 * @name f__28E6_0109_001A_077C
 * @implements 28E6:0109:001A:077C ()
 *
 */
void f__28E6_0109_001A_077C()
{
	emu_addw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x140);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_decw(&emu_dx);
	if (!emu_flags.zf) { f__28E6_0100_0009_9E6A(); return; }
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__28E6_0123_000A_333D()
 *
 * @name f__28E6_0123_000A_333D
 * @implements 28E6:0123:000A:333D ()
 *
 * Called From: 28E6:0106:0026:C006
 * Called From: 28E6:0106:0009:9E6A
 */
void f__28E6_0123_000A_333D()
{
	emu_shrw(&emu_cx, 0x1);
	emu_rep_movsw(emu_ds);
	emu_adcw(&emu_cx, 0x0);
	emu_rep_movsb(emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	return;
}
