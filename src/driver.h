/* $Id$ */

/** @file src/driver.h %Driver definitions. */

#ifndef DRIVER_H
#define DRIVER_H

MSVC_PACKED_BEGIN
/**
 * Inside the GlobalData is information about digitized sound drivers. This is the layout of
 *  that data.
 */
typedef struct DSDriver {
	/* 0000(4)   */ PACK csip32 filename;                   /*!< Pointer to filename for the driver. */
} GCC_PACKED DSDriver;
MSVC_PACKED_END
assert_compile(sizeof(DSDriver) == 0x04);

MSVC_PACKED_BEGIN
/**
 * Inside the GlobalData is information about music/sound drivers. This is the layout of
 *  that data.
 */
typedef struct MSDriver {
	/* 0000(4)   */ PACK csip32 filename;                   /*!< Pointer to filename for the driver. */
	/* 0004(4)   */ PACK csip32 extension;                  /*!< Pointer to extension used for music file names. */
	/* 0008(2)   */ PACK uint16 variable_0008;              /*!< ?? */
	/* 000A(2)   */ PACK uint16 variable_000A;              /*!< ?? */
} GCC_PACKED MSDriver;
MSVC_PACKED_END
assert_compile(sizeof(MSDriver) == 0x0C);

MSVC_PACKED_BEGIN
typedef struct Driver {
	/* 0000(2)   */ PACK uint16 index;                      /*!< ?? */
	/* 0002(4)   */ PACK csip32 dfilename;                  /*!< Pointer to filename for the driver. */
	/* 0006(4)   */ PACK char   extension[4];               /*!< Extension used for music file names. */
	/* 000A(4)   */ PACK char   extension2[4];              /*!< Extension used for ?? */
	/* 000E(4)   */ PACK csip32 dcontent;                   /*!< Pointer to the driver file content. */
	/* 0012(4)   */ PACK csip32 variable_12;                /*!< ?? */
	/* 0016(4)   */ PACK csip32 content;                    /*!< Pointer to the file to play content. */
	/* 001A(4)   */ PACK csip32 filename;                   /*!< Pointer to the name of file to play. */
	/* 001E(4)   */ PACK csip32 variable_1E;                /*!< ?? */
	/* 0022(2)   */ PACK uint16 contentMalloced;            /*!< Wether content pointer is the result of a malloc. */
	/* 0024(2)   */ PACK uint16 customTimer;                /*!< ?? */
} GCC_PACKED Driver;
MSVC_PACKED_END
assert_compile(sizeof(Driver) == 0x26);

MSVC_PACKED_BEGIN
typedef struct MSBuffer {
	/* 0000(2)   */ PACK uint16 index;                      /*!< ?? */
	/* 0002(4)   */ PACK csip32 buffer;                     /*!< ?? */
} GCC_PACKED MSBuffer;
MSVC_PACKED_END
assert_compile(sizeof(MSBuffer) == 0x06);

typedef struct DriverInfo {
	uint16 version;                                         /*!< Version of the driver (of the API). */
	uint8  unknown_0002[2];
	char extension[4];                                      /*!< Extension of the file the driver supports. */
	csip32 driverCode;                                      /*!< Location where the driver is loaded. */
	uint16 port;                                            /*!< DMA used for driver. */
	uint16 irq1;                                            /*!< IRQ used for driver. */
	uint16 dma;                                             /*!< DMA used for driver. */
	uint16 drq;                                             /*!< DRQ used for driver. */
	uint16 frequency;                                       /*!< The timer frequency this driver works with. */
} DriverInfo;

extern uint16 Drivers_EnableSounds(uint16 sounds);
extern uint16 Drivers_EnableMusic(uint16 music);
extern void Drivers_All_Init(uint16 sound, uint16 music, uint16 voice);
extern csip32 Drivers_GetFunctionCSIP(uint16 driver, uint16 function);
extern bool Driver_Music_IsPlaying();
extern bool Driver_Voice_IsPlaying();
extern void Driver_Sound_Play(int16 index, int16 volume);
extern void Driver_Music_Stop();
extern void Driver_Sound_Stop();
extern void Driver_Voice_LoadFile(const char *filename, void *buffer, uint32 length);
extern void Driver_Voice_Play(uint8 *arg06, int16 arg0A);
extern void Driver_Voice_Stop();
extern void Driver_Sound_LoadFile(const char *musicName);
extern char *Drivers_GenerateFilename(const char *name, Driver *driver);
extern void Drivers_All_Uninit();
extern void Driver_LoadFile(const char *musicName, Driver *driver);
extern void Driver_UnloadFile(Driver *driver);
extern void Driver_Music_FadeOut();

#endif /* DRIVER_H */
