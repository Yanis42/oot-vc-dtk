#ifndef _AI_H
#define _AI_H

// Note: this is the `ai.h` file from oot-gc

#include "emulator/xlObject.h"
#include "revolution/types.h"

// __anon_0x753E7
typedef struct AI {
    /* 0x00 */ s32 nSize;
    /* 0x04 */ bool bEnable;
    /* 0x08 */ s32 nControl;
    /* 0x0C */ s32 nAddress;
    /* 0x10 */ s32 nRateBit;
    /* 0x14 */ s32 nRateDAC;
    /* 0x18 */ s32 nStatus;
} AI; // size = 0x1C

bool aiPut8(AI* pAI, u32 nAddress, s8* pData);
bool aiPut16(AI* pAI, u32 nAddress, s16* pData);
bool aiPut32(AI* pAI, u32 nAddress, s32* pData);
bool aiPut64(AI* pAI, u32 nAddress, s64* pData);

bool aiGet8(AI* pAI, u32 nAddress, s8* pData);
bool aiGet16(AI* pAI, u32 nAddress, s16* pData);
bool aiGet32(AI* pAI, u32 nAddress, s32* pData);
bool aiGet64(AI* pAI, u32 nAddress, s64* pData);

bool aiEnable(AI* pAI, bool bEnable);
bool aiEvent(AI* pAI, s32 nEvent, void* pArgument);

extern _XL_OBJECTTYPE gClassAI;

#endif