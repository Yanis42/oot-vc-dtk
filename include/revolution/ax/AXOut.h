#ifndef REVOSDK_AX_OUT_H
#define REVOSDK_AX_OUT_H
#include "dolphin/types.h"
#include "AX.h"


void AXSetMode(s32);
AXCallback AXRegisterCallback(AXCallback);

s32 AXRmtGetSamplesLeft(void);
void AXRmtGetSamples(int, void *, s32);
void AXRmtAdvancePtr(s32);


#endif