#ifndef _RVL_SDK_VI_VI3IN1_H
#define _RVL_SDK_VI_VI3IN1_H

#include "revolution/types.h"
#include "macros.h"

#ifdef __cplusplus
extern "C" {
#endif

void __VISetRGBModeImm(void);

void __VISetRevolutionModeSimple(void);
void __VISetYUVSEL(VIBool outsel) NO_INLINE;

#ifdef __cplusplus
}
#endif

#endif
