/* $Id$ */

/** @file src/dsp.h DSP definitions. */

#ifndef DSP_H
#define DSP_H

extern void DSP_Play(uint8 *data);
extern void DSP_Stop();
extern uint8 DSP_GetStatus();
extern void DSP_Init();
extern void DSP_Uninit();

#endif /* DSP_H */
