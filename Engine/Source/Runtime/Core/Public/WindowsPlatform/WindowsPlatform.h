#pragma once


#if !defined(INFINITY_INCLUDE_PERMISSION_PLATFORM)
	#error "This file is not allowed to be included from any other file than Platform.h."
#endif


#define INFINITY_INCLUDE_PERMISSION_WINDOWS_PLATFORM


#define INFINITY_PLATFORM_TEXT_ENCODING INFINITY_PLATFORM_TEXT_ENCODING_UTF16_CODE
#define INFINITY_PLATFORM_TEXT_ENCODING_INTERNAL INFINITY_PLATFORM_TEXT_ENCODING_ANSI_CODE


#include "WindowsSystemIncludes.h"


#include "WindowsPlatformTypes.h"


#undef INFINITY_INCLUDE_PERMISSION_WINDOWS_PLATFORM