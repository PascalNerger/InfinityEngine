#pragma once


#if !defined(INFINITY_INCLUDE_PERMISSION_PLATFORM)
	#error "This file is not allowed to be included from any other file than Platform.h."
#endif


#define INFINITY_INCLUDE_PERMISSION_COMPILER_PLATFORM


#include "CompilerFeatures.h"

#if defined(INFINITY_PLATFORM_WINDOWS)
	#include "MsvcCompiler.h"
#elif defined(INFINITY_PLATFORM_LINUX)
	#include "GccCompiler.h"
#elif defined(INFINITY_PLATFORM_MAC)
	#include "ClangCompiler.h"
#endif

#include "CompilerDefines.h"


#if defined(INFINITY_BUILD_DYNAMIC_LIB)
	#define INFINITY_API DLL_EXPORT
#else
	#define INFINITY_API DLL_IMPORT
#endif


#undef INFINITY_INCLUDE_PERMISSION_COMPILER_PLATFORM