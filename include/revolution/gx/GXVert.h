#ifndef REVOSDK_GX_VERT_H
#define REVOSDK_GX_VERT_H

#include "dolphin/types.h"
#include "revolution/gx/gx.h"


static void GXCmd1u8(u8 uc)
{
    WGPIPE.c = uc;
}

static void GXCmd1u16(u16 us)
{
    WGPIPE.s = us;
}

static void GXCmd1u32(u32 ul)
{
    WGPIPE.i = ul;
}

static void GXPosition3f32(f32 x, f32 y, f32 z)
{
    WGPIPE.f = x;
    WGPIPE.f = y;
    WGPIPE.f = z;
}

static void GXPosition2f32(f32 x, f32 y)
{
    WGPIPE.f = x;
    WGPIPE.f = y;
}

static void GXColor1u32(u32 c)
{
    WGPIPE.i = c;
}

static void GXTexCoord2f32(f32 x, f32 y)
{
    WGPIPE.f = x;
    WGPIPE.f = y;
}

static void GXTexCoord2u16(u16 c1, u16 c2)
{
    WGPIPE.s = c1;
    WGPIPE.s = c2;
}


#endif