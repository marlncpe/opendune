/* $Id$ */

#ifndef GFX_H
#define GFX_H

enum {
	SCREEN_WIDTH  = 320,
	SCREEN_HEIGHT = 200
};

extern void GFX_DrawSprite(uint16 spriteID, uint16 x, uint16 y, uint8 houseID);
extern void GFX_Init_Sprites(uint16 memoryBlockID, void *iconRPAL, void *iconRTBL);
extern void GFX_Init_SpriteInfo(uint16 widthSize, uint16 heightSize);
extern void GFX_PutPixel(uint16 x, uint16 y, uint8 colour);
extern uint16 GFX_Screen_GetSegementActive();
extern uint16 GFX_Screen_GetSegment_ByIndex2(uint16 memoryBlockID);
extern uint16 GFX_Screen_GetSegment_ByIndex(uint16 memoryBlockID);
extern void GFX_Screen_Copy2(int16 xSrc, int16 ySrc, int16 xDst, int16 yDst, int16 width, int16 height, uint16 memBlockSrc, uint16 memBlockDst, bool skipNull);
extern void GFX_Screen_Copy(int16 xSrc, int16 ySrc, int16 xDst, int16 yDst, int16 width, int16 height, uint16 memBlockSrc, uint16 memBlockDst);
extern void GFX_ClearScreen();
extern void GFX_SetPalette(uint8 *palette);
extern uint8 GFX_GetPixel(uint16 x, uint16 y);
extern void GFX_Screen_Copy3(uint16 screenSrc, uint16 screenDst);
extern uint16 GFX_GetSize(int16 width, int16 height);

extern void emu_GFX_GetScreenSegment();
extern void emu_GFX_GetSegment_ByIndex();
extern void emu_GFX_Screen_Copy2();
extern void emu_GFX_SetPalette();
extern void emu_GFX_GetSize();

#endif /* GFX_H */
