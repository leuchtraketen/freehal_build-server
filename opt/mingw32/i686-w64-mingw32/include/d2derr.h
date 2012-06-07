/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.

 * d2derr.h - Header file for the Direct2D API
 * No original Microsoft headers were used in the creation of this
 * file.
 *API docs available at: http://msdn.microsoft.com/en-us/library/dd372349%28v=VS.85%29.aspx
 */

#ifndef _D2DERR_H
#define _D2DERR_H

/* error codes */
#define D2DERR_BAD_NUMBER 0x88990011
#define D2DERR_DISPLAY_FORMAT_NOT_SUPPORTED 0x88990009
#define D2DERR_DISPLAY_STATE_INVALID 0x88990006
#define D2DERR_EXCEEDS_MAX_BITMAP_SIZE 0x8899001D
#define D2DERR_INCOMPATIBLE_BRUSH_TYPES 0x88990018
#define D2DERR_INSUFFICIENT_BUFFER ERROR_INSUFFICIENT_BUFFER (Windows error)
#define D2DERR_INTERNAL_ERROR 0x88990008
#define D2DERR_INVALID_CALL 0x8899000A
#define D2DERR_LAYER_ALREADY_IN_USE 0x88990013
#define D2DERR_MAX_TEXTURE_SIZE_EXCEEDED 0x8899000F
#define D2DERR_NO_HARDWARE_DEVICE 0x8899000B
#define D2DERR_NOT_INITIALIZED 0x88990002
#define D2DERR_POP_CALL_DID_NOT_MATCH_PUSH 0x88990014
#define D2DERR_PUSH_POP_UNBALANCED 0x88990016
#define D2DERR_RECREATE_TARGET	 0x8899000C
#define D2DERR_RENDER_TARGET_HAS_LAYER_OR_CLIPRECT 0x88990017
#define D2DERR_SCANNER_FAILED 0x88990004
#define D2DERR_SCREEN_ACCESS_DENIED 0x88990005
#define D2DERR_SHADER_COMPILE_FAILED 0x8899000E
#define D2DERR_TARGET_NOT_GDI_COMPATIBLE 0x8899001A
#define D2DERR_TEXT_EFFECT_IS_WRONG_TYPE 0x8899001B
#define D2DERR_TEXT_RENDERER_NOT_RELEASED 0x8899001C
#define D2DERR_TOO_MANY_SHADER_ELEMENTS 0x8899000D
#define D2DERR_UNSUPPORTED_OPERATION 0x88990003
#define D2DERR_UNSUPPORTED_PIXEL_FORMAT WINCODEC_ERR_UNSUPPORTEDPIXELFORMAT
#define D2DERR_UNSUPPORTED_VERSION 0x88990010
#define D2DERR_WIN32_ERROR 0x88990019
#define D2DERR_WRONG_FACTORY 0x88990012
#define D2DERR_WRONG_RESOURCE_DOMAIN 0x88990015
#define D2DERR_WRONG_STATE 0x88990001
#define D2DERR_ZERO_VECTOR 0x88990007

#endif /* _D2DERR_H */
