#pragma once


#define INFINITY_INCLUDE_PERMISSION_PLATFORM


#include "PreprocessorChecks.h"


#include "PlatformCrt.h"
#include "PreprocessorHelpers.h"


#include "Build.h"
#include "CompilerPlatform.h"


#include "PlatformTextCodes.h"


#if defined(INFINITY_PLATFORM_WINDOWS)
	#define INFINITY_PLATFORM_HEADER_NAME Windows
#elif defined(INFINITY_PLATFORM_LINUX)
	#define INFINITY_PLATFORM_HEADER_NAME Linux
#elif define(INFINITY_PLATFORM_MAC)
	#define INFINITY_PLATFORM_HEADER_NAME Mac
#endif


#include "UniversalPlatform.h"
#include INFINITY_PLATFORM_HEADER(Platform.h)


#include "PlatformText.h"
#include "PlatformAssertions.h"


#include "PlatformTypes.h"


#undef INFINITY_INCLUDE_PERMISSION_PLATFORM