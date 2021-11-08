#pragma once


#if !defined(INFINITY_INCLUDE_PERMISSION_COMPILER_PLATFORM)
	#error "This file is not allowed to be included from any other file than CompilerPlatform.h."
#endif


#if !defined(INFINITY_PLATFORM_WINDOWS)
	#error "Infinity Engine supports MSVC exclusively on Windows."
#endif


#if defined(_MSC_VER)
	#define INFINITY_COMPILER_MSVC
	#define INFINITY_COMPILER_NAME PREPROCESSOR_TO_STRING(MSVC)
	#define INFINITY_COMPILER_VERSION PREPROCESSOR_TO_STRING(_MSC_VER)
#endif


#define INFINITY_COMPILER_DEBUG_BREAK() __debugbreak()
#define INFINITY_COMPILER_ASSUME(X) __assume(X)


#define INFINITY_COMPILER_DLL_EXPORT __declspec(dllexport)
#define INFINITY_COMPILER_DLL_IMPORT __declspec(dllimport)


#define INFINITY_COMPILER_INLINE inline
#define INFINITY_COMPILER_FORCE_INLINE __forceinline
#define INFINITY_COMPILER_FORCE_NO_INLINE __declspec(noinline)