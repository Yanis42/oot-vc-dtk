#ifndef _DOLPHIN_OSRESET
#define _DOLPHIN_OSRESET

#include "dolphin/types.h"

#define OS_RESETCODE_RESTART 0x80000000
#define OS_RESETCODE_SYSTEM 0x40000000

#define OS_RESETCODE_EXEC 0xC0000000
#define OS_RESETCODE_NETCONFIG 0xC0010000

#define OS_RESET_TIMEOUT OSMillisecondsToTicks(1000)

#define OS_RESET_RESTART 0
#define OS_RESET_HOTRESET 1
#define OS_RESET_SHUTDOWN 2

#define OS_RESET_PRIO_SO 110
#define OS_RESET_PRIO_IP 111
#define OS_RESET_PRIO_CARD 127
#define OS_RESET_PRIO_PAD 127
#define OS_RESET_PRIO_GX 127
#define OS_RESET_PRIO_ALARM 4294967295

typedef bool (*OSResetFunction)(bool final);
typedef struct OSResetFunctionInfo OSResetFunctionInfo;

struct OSResetFunctionInfo {
    // public
    OSResetFunction func;
    u32 priority;

    // private
    OSResetFunctionInfo* next;
    OSResetFunctionInfo* prev;
};

void OSRegisterResetFunction(OSResetFunctionInfo* func);
void OSResetSystem(int reset, u32 resetCode, bool forceMenu);
u32 OSGetResetCode(void);

#endif // _DOLPHIN_OSRESET
