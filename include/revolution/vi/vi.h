#ifndef RVL_SDK_VI_H
#define RVL_SDK_VI_H

#include "revolution/types.h"
#include "revolution/gx/GXFramebuf.h"
#include "revolution/vi/vitypes.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef void (*VIRetraceCallback)(u32 retraceCount);
typedef void (*VIPositionCallback)(s16 displayX, s16 displayY);

VIRetraceCallback VISetPreRetraceCallback(VIRetraceCallback callback);
VIRetraceCallback VISetPostRetraceCallback(VIRetraceCallback callback);

void VIInit(void);
void VIWaitForRetrace(void);

void VIConfigure(const GXRenderModeObj* rmo);
void VIConfigurePan(u16 x, u16 y, u16 w, u16 h);
void VIFlush(void);

void VISetNextFrameBuffer(void* fb);
void* VIGetCurrentFrameBuffer(void);

void VISetBlack(bool black);
s32 VIGetRetraceCount(void);

VITvFormat VIGetTvFormat(void);
VIScanMode VIGetScanMode(void);

#ifdef __cplusplus
}
#endif

#endif
