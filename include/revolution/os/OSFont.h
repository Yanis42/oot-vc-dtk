#ifndef REVOSDK_OS_FONT
#define REVOSDK_OS_FONT

#include "dolphin/types.h"

enum
{
	OS_ENCODE_CP1252,
	OS_ENCODE_SJIS
};

typedef u16 OSFontEncoding;
typedef u16 OSFontChar;

struct OSFontHeader
{
	char UNK_0x0[0x8]; /* at 0x0 */
	u16 ascent; /* at 0x8 */
	u16 descent; /* at 0xa */
	
	u16 charWidth; /* at 0xc */
	
	u16 linefeed; /* at 0xe */
	
	u16 cellWidth; /* at 0x10 */
	u16 cellHeight; /* at 0x12 */
	
	s32 UNK_0x14;
	s32 UNK_0x18;
	u16 UNK_0x1A;
	
	u16 SHORT_0x1E;
	u16 SHORT_0x20;
};

s32 OSInitFont(void *);
OSFontEncoding OSGetFontEncode(void);

void OSGetFontWidth(void *, u32 *);

void OSGetFontTexture(void *, u8 **, s32 *, s32 *, s32 *);

#endif