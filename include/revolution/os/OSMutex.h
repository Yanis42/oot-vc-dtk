#ifndef RVL_SDK_OS_MUTEX_H
#define RVL_SDK_OS_MUTEX_H

#include "revolution/os/OSThread.h"
#include "revolution/types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OSMutex {
    OSThreadQueue queue;  // at 0x0
    OSThread* thread;     // at 0x8
    s32 lock;             // at 0xC
    struct OSMutex* next; // at 0x10
    struct OSMutex* prev; // at 0x14
} OSMutex;

void OSInitMutex(OSMutex* mutex);
void OSLockMutex(OSMutex* mutex);
void OSUnlockMutex(OSMutex* mutex);
void __OSUnlockAllMutex(OSThread* thread);
bool OSTryLockMutex(OSMutex* mutex);

#ifdef __cplusplus
}
#endif

#endif
