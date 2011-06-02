/* $Id$ */

#ifndef SOUND_H
#define SOUND_H

MSVC_PACKED_BEGIN
typedef struct SoundData {
	/* 0000(4)   */ PACK csip32 string;                     /*!< Pointer to a string. */
	/* 0004(2)   */ PACK uint16 variable_04;                /*!< ?? */
} GCC_PACKED SoundData;
MSVC_PACKED_END
assert_compile(sizeof(SoundData) == 0x6);

/** Number of voices in the game. */
#define NUM_VOICES 131

extern void Music_Play(uint16 musicID);
extern void Voice_PlayAtTile(int16 voiceID, tile32 position);
extern void Voice_Play(int16 voiceID);
extern void Voice_LoadVoices(uint16 voiceSet);

extern void Sound_Unknown0156(uint16 index);
extern void Sound_Unknown0363(uint16 index);
extern bool Sound_Unknown0470();
extern csip32 Sound_Unknown0823(char *filename);

#endif /* SOUND_H */
