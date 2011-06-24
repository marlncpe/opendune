/* $Id$ */

/** @file src/table/tilediff.c TileDiff file table. */

#include <stdio.h>
#include "types.h"

const tile32 g_table_tilediff[][8] = {
	{ /* 0 */
		{ /* 0 */ { 0, 0 } },
		{ /* 1 */ { 0, -1 } },
		{ /* 2 */ { 1, 0 } },
		{ /* 3 */ { 0, -1 } },
		{ /* 4 */ { 1, 0 } },
		{ /* 5 */ { 0, 0 } },
		{ /* 6 */ { 1, 0 } },
		{ /* 7 */ { 0, 0 } },
	},
	{ /* 1 */
		{ /* 0 */ { 0, 0 } },
		{ /* 1 */ { 0, 0 } },
		{ /* 2 */ { 0, 0 } },
		{ /* 3 */ { 0, 0 } },
		{ /* 4 */ { 0, 0 } },
		{ /* 5 */ { 0, 0 } },
		{ /* 6 */ { 0, 0 } },
		{ /* 7 */ { 0, 0 } },
	},
	{ /* 2 */
		{ /* 0 */ { 0, 16 } },
		{ /* 1 */ { 16, 0 } },
		{ /* 2 */ { 16, 16 } },
		{ /* 3 */ { 0, 0 } },
		{ /* 4 */ { 0, 0 } },
		{ /* 5 */ { 0, 0 } },
		{ /* 6 */ { 0, 0 } },
		{ /* 7 */ { 0, 0 } },
	},
	{ /* 3 */
		{ /* 0 */ { 0, 32 } },
		{ /* 1 */ { 32, 0 } },
		{ /* 2 */ { 32, 32 } },
		{ /* 3 */ { 0, 0 } },
		{ /* 4 */ { 0, 0 } },
		{ /* 5 */ { 0, 0 } },
		{ /* 6 */ { 0, 0 } },
		{ /* 7 */ { 0, 0 } },
	},
	{ /* 4 */
		{ /* 0 */ { 0, 48 } },
		{ /* 1 */ { 48, 0 } },
		{ /* 2 */ { 48, 48 } },
		{ /* 3 */ { 0, 0 } },
		{ /* 4 */ { 0, 0 } },
		{ /* 5 */ { 0, 0 } },
		{ /* 6 */ { 0, 0 } },
		{ /* 7 */ { 0, 0 } },
	},
	{ /* 5 */
		{ /* 0 */ { 0, 64 } },
		{ /* 1 */ { 64, 0 } },
		{ /* 2 */ { 64, 64 } },
		{ /* 3 */ { 0, 0 } },
		{ /* 4 */ { 0, 0 } },
		{ /* 5 */ { 0, 0 } },
		{ /* 6 */ { 0, 0 } },
		{ /* 7 */ { 0, 0 } },
	},
	{ /* 6 */
		{ /* 0 */ { 0, 80 } },
		{ /* 1 */ { 80, 0 } },
		{ /* 2 */ { 80, 80 } },
		{ /* 3 */ { 0, 0 } },
		{ /* 4 */ { 0, 0 } },
		{ /* 5 */ { 0, 0 } },
		{ /* 6 */ { 0, 0 } },
		{ /* 7 */ { 0, 0 } },
	},
	{ /* 7 */
		{ /* 0 */ { 0, 96 } },
		{ /* 1 */ { 96, 0 } },
		{ /* 2 */ { 96, 96 } },
		{ /* 3 */ { 0, 0 } },
		{ /* 4 */ { 0, 0 } },
		{ /* 5 */ { 0, 0 } },
		{ /* 6 */ { 0, 0 } },
		{ /* 7 */ { 0, 0 } },
	},
	{ /* 8 */
		{ /* 0 */ { 0, 112 } },
		{ /* 1 */ { 112, 0 } },
		{ /* 2 */ { 112, 112 } },
		{ /* 3 */ { 0, 0 } },
		{ /* 4 */ { 0, 0 } },
		{ /* 5 */ { 0, 0 } },
		{ /* 6 */ { 0, 0 } },
		{ /* 7 */ { 0, 0 } },
	},
	{ /* 9 */
		{ /* 0 */ { 0, 128 } },
		{ /* 1 */ { 128, 0 } },
		{ /* 2 */ { 128, 128 } },
		{ /* 3 */ { 0, 0 } },
		{ /* 4 */ { 0, 0 } },
		{ /* 5 */ { 0, 0 } },
		{ /* 6 */ { 0, 0 } },
		{ /* 7 */ { 0, 0 } },
	},
	{ /* 10 */
		{ /* 0 */ { 0, 144 } },
		{ /* 1 */ { 144, 0 } },
		{ /* 2 */ { 144, 144 } },
		{ /* 3 */ { 0, 0 } },
		{ /* 4 */ { 0, 0 } },
		{ /* 5 */ { 0, 0 } },
		{ /* 6 */ { 0, 0 } },
		{ /* 7 */ { 0, 0 } },
	},
	{ /* 11 */
		{ /* 0 */ { 0, 160 } },
		{ /* 1 */ { 160, 0 } },
		{ /* 2 */ { 160, 160 } },
		{ /* 3 */ { 0, 0 } },
		{ /* 4 */ { 0, 0 } },
		{ /* 5 */ { 0, 0 } },
		{ /* 6 */ { 0, 0 } },
		{ /* 7 */ { 0, 0 } },
	},
	{ /* 12 */
		{ /* 0 */ { 0, 176 } },
		{ /* 1 */ { 176, 0 } },
		{ /* 2 */ { 176, 176 } },
		{ /* 3 */ { 0, 0 } },
		{ /* 4 */ { 0, 0 } },
		{ /* 5 */ { 0, 0 } },
		{ /* 6 */ { 0, 0 } },
		{ /* 7 */ { 0, 0 } },
	},
	{ /* 13 */
		{ /* 0 */ { 0, 192 } },
		{ /* 1 */ { 192, 0 } },
		{ /* 2 */ { 192, 192 } },
		{ /* 3 */ { 0, 0 } },
		{ /* 4 */ { 0, 0 } },
		{ /* 5 */ { 0, 0 } },
		{ /* 6 */ { 0, 0 } },
		{ /* 7 */ { 0, 0 } },
	},
	{ /* 14 */
		{ /* 0 */ { 0, 208 } },
		{ /* 1 */ { 208, 0 } },
		{ /* 2 */ { 208, 208 } },
		{ /* 3 */ { 0, 0 } },
		{ /* 4 */ { 0, 0 } },
		{ /* 5 */ { 0, 0 } },
		{ /* 6 */ { 0, 0 } },
		{ /* 7 */ { 0, 0 } },
	},
	{ /* 15 */
		{ /* 0 */ { 0, 224 } },
		{ /* 1 */ { 224, 0 } },
		{ /* 2 */ { 224, 224 } },
		{ /* 3 */ { 0, 0 } },
		{ /* 4 */ { 0, 0 } },
		{ /* 5 */ { 0, 0 } },
		{ /* 6 */ { 0, 0 } },
		{ /* 7 */ { 0, 0 } },
	},
	{ /* 16 */
		{ /* 0 */ { 0, 240 } },
		{ /* 1 */ { 240, 0 } },
		{ /* 2 */ { 240, 240 } },
		{ /* 3 */ { 0, 0 } },
		{ /* 4 */ { 0, 0 } },
		{ /* 5 */ { 0, 0 } },
		{ /* 6 */ { 0, 0 } },
		{ /* 7 */ { 0, 0 } },
	},
	{ /* 17 */
		{ /* 0 */ { 0, 256 } },
		{ /* 1 */ { 256, 0 } },
		{ /* 2 */ { 256, 256 } },
		{ /* 3 */ { 128, 0 } },
		{ /* 4 */ { 128, 256 } },
		{ /* 5 */ { 0, 128 } },
		{ /* 6 */ { 256, 128 } },
		{ /* 7 */ { 128, 128 } },
	},
	{ /* 18 */
		{ /* 0 */ { 0, 272 } },
		{ /* 1 */ { 272, 0 } },
		{ /* 2 */ { 272, 272 } },
		{ /* 3 */ { 128, 0 } },
		{ /* 4 */ { 128, 272 } },
		{ /* 5 */ { 0, 128 } },
		{ /* 6 */ { 272, 128 } },
		{ /* 7 */ { 128, 128 } },
	},
	{ /* 19 */
		{ /* 0 */ { 0, 288 } },
		{ /* 1 */ { 288, 0 } },
		{ /* 2 */ { 288, 288 } },
		{ /* 3 */ { 144, 0 } },
		{ /* 4 */ { 144, 288 } },
		{ /* 5 */ { 0, 144 } },
		{ /* 6 */ { 288, 144 } },
		{ /* 7 */ { 144, 144 } },
	},
	{ /* 20 */
		{ /* 0 */ { 0, 304 } },
		{ /* 1 */ { 304, 0 } },
		{ /* 2 */ { 304, 304 } },
		{ /* 3 */ { 144, 0 } },
		{ /* 4 */ { 144, 304 } },
		{ /* 5 */ { 0, 144 } },
		{ /* 6 */ { 304, 144 } },
		{ /* 7 */ { 144, 144 } },
	},
	{ /* 21 */
		{ /* 0 */ { 0, 320 } },
		{ /* 1 */ { 320, 0 } },
		{ /* 2 */ { 320, 320 } },
		{ /* 3 */ { 160, 0 } },
		{ /* 4 */ { 160, 320 } },
		{ /* 5 */ { 0, 160 } },
		{ /* 6 */ { 320, 160 } },
		{ /* 7 */ { 160, 160 } },
	},
	{ /* 22 */
		{ /* 0 */ { 0, 336 } },
		{ /* 1 */ { 336, 0 } },
		{ /* 2 */ { 336, 336 } },
		{ /* 3 */ { 160, 0 } },
		{ /* 4 */ { 160, 336 } },
		{ /* 5 */ { 0, 160 } },
		{ /* 6 */ { 336, 160 } },
		{ /* 7 */ { 160, 160 } },
	},
	{ /* 23 */
		{ /* 0 */ { 0, 352 } },
		{ /* 1 */ { 352, 0 } },
		{ /* 2 */ { 352, 352 } },
		{ /* 3 */ { 176, 0 } },
		{ /* 4 */ { 176, 352 } },
		{ /* 5 */ { 0, 176 } },
		{ /* 6 */ { 352, 176 } },
		{ /* 7 */ { 176, 176 } },
	},
	{ /* 24 */
		{ /* 0 */ { 0, 368 } },
		{ /* 1 */ { 368, 0 } },
		{ /* 2 */ { 368, 368 } },
		{ /* 3 */ { 176, 0 } },
		{ /* 4 */ { 176, 368 } },
		{ /* 5 */ { 0, 176 } },
		{ /* 6 */ { 368, 176 } },
		{ /* 7 */ { 176, 176 } },
	},
	{ /* 25 */
		{ /* 0 */ { 0, 384 } },
		{ /* 1 */ { 384, 0 } },
		{ /* 2 */ { 384, 384 } },
		{ /* 3 */ { 192, 0 } },
		{ /* 4 */ { 192, 384 } },
		{ /* 5 */ { 0, 192 } },
		{ /* 6 */ { 384, 192 } },
		{ /* 7 */ { 192, 192 } },
	},
	{ /* 26 */
		{ /* 0 */ { 0, 400 } },
		{ /* 1 */ { 400, 0 } },
		{ /* 2 */ { 400, 400 } },
		{ /* 3 */ { 192, 0 } },
		{ /* 4 */ { 192, 400 } },
		{ /* 5 */ { 0, 192 } },
		{ /* 6 */ { 400, 192 } },
		{ /* 7 */ { 192, 192 } },
	},
	{ /* 27 */
		{ /* 0 */ { 0, 416 } },
		{ /* 1 */ { 416, 0 } },
		{ /* 2 */ { 416, 416 } },
		{ /* 3 */ { 208, 0 } },
		{ /* 4 */ { 208, 416 } },
		{ /* 5 */ { 0, 208 } },
		{ /* 6 */ { 416, 208 } },
		{ /* 7 */ { 208, 208 } },
	},
	{ /* 28 */
		{ /* 0 */ { 0, 432 } },
		{ /* 1 */ { 432, 0 } },
		{ /* 2 */ { 432, 432 } },
		{ /* 3 */ { 208, 0 } },
		{ /* 4 */ { 208, 432 } },
		{ /* 5 */ { 0, 208 } },
		{ /* 6 */ { 432, 208 } },
		{ /* 7 */ { 208, 208 } },
	},
	{ /* 29 */
		{ /* 0 */ { 0, 448 } },
		{ /* 1 */ { 448, 0 } },
		{ /* 2 */ { 448, 448 } },
		{ /* 3 */ { 224, 0 } },
		{ /* 4 */ { 224, 448 } },
		{ /* 5 */ { 0, 224 } },
		{ /* 6 */ { 448, 224 } },
		{ /* 7 */ { 224, 224 } },
	},
	{ /* 30 */
		{ /* 0 */ { 0, 464 } },
		{ /* 1 */ { 464, 0 } },
		{ /* 2 */ { 464, 464 } },
		{ /* 3 */ { 224, 0 } },
		{ /* 4 */ { 224, 464 } },
		{ /* 5 */ { 0, 224 } },
		{ /* 6 */ { 464, 224 } },
		{ /* 7 */ { 224, 224 } },
	},
	{ /* 31 */
		{ /* 0 */ { 0, 480 } },
		{ /* 1 */ { 480, 0 } },
		{ /* 2 */ { 480, 480 } },
		{ /* 3 */ { 240, 0 } },
		{ /* 4 */ { 240, 480 } },
		{ /* 5 */ { 0, 240 } },
		{ /* 6 */ { 480, 240 } },
		{ /* 7 */ { 240, 240 } },
	},
	{ /* 32 */
		{ /* 0 */ { 0, 496 } },
		{ /* 1 */ { 496, 0 } },
		{ /* 2 */ { 496, 496 } },
		{ /* 3 */ { 240, 0 } },
		{ /* 4 */ { 240, 496 } },
		{ /* 5 */ { 0, 240 } },
		{ /* 6 */ { 496, 240 } },
		{ /* 7 */ { 240, 240 } },
	},
	{ /* 33 */
		{ /* 0 */ { 0, 768 } },
		{ /* 1 */ { 768, 0 } },
		{ /* 2 */ { 768, 768 } },
		{ /* 3 */ { 512, 0 } },
		{ /* 4 */ { 512, 512 } },
		{ /* 5 */ { 0, 512 } },
		{ /* 6 */ { 512, 256 } },
		{ /* 7 */ { 256, 256 } },
	}
};
