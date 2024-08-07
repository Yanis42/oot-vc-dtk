#ifndef REVOSDK_GX_DISPLAY_LIST_H
#define REVOSDK_GX_DISPLAY_LIST_H
#include "dolphin/types.h"
#include "GX.h"


static void GXFastCallDisplayList(void * ptr, u32 cmdSize)
{
	WGPIPE.c = 0x40;
	WGPIPE.p = ptr;
	WGPIPE.i = cmdSize;
}

void GXCallDisplayList(void *list, u32 nbytes);


#endif