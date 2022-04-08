#pragma once


#define INFINITY_INCLUDE_PERMISSION_PLATFORM


#include "PreprocessorChecks.h"


#include "PlatformCrt.h"
#include "PreprocessorHelpers.h"


#define VARIADIC_ARGUMENTS_START(VarArgs, Format) va_start(VarArgs, Format)
#define VARIADIC_ARGUMENTS_END(VarArgs) va_end(VarArgs)
#define VARIADIC_ARGUMENT(VarArgs, Type) va_arg(VarArgs, Type)


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


#include "PlatformTypes.h"


#include "PlatformText.h"
#include "PlatformAssertions.h"


#include "UniversalPlatformMath.h"
#include INFINITY_PLATFORM_HEADER(PlatformMath.h)


#include "UniversalPlatformTime.h"
#include INFINITY_PLATFORM_HEADER(PlatformTime.h)


#include "UniversalPlatformString.h"
#include INFINITY_PLATFORM_HEADER(PlatformString.h)



#undef INFINITY_INCLUDE_PERMISSION_PLATFORM