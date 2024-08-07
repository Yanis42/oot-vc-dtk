#ifndef REVOSDK_OS_MUTEX
#define REVOSDK_OS_MUTEX

struct OSMutex
{
	char UNK_0x0[0x18];
} __attribute__ ((aligned(4)));

void OSLockMutex(struct OSMutex *);
void OSInitMutex(struct OSMutex *);
void OSUnlockMutex(struct OSMutex *);

#endif