#pragma once


#if !defined(INFINITY_INCLUDE_PERMISSION_COMPILER_PLATFORM)
	#error "This file is not allowed to be included from any other file than CompilerPlatform.h."
#endif


#if !defined(INFINITY_PLATFORM_MAC)
	#error "Infinity Engine supports Clang exclusively on Mac."
#endif


#if defined(__clang__)
	#define INFINITY_COMPILER_CLANG
	#define INFINITY_COMPILER_NAME PREPROCESSOR_TO_STRING(Clang)
	#define INFINITY_COMPILER_VERSION PREPROCESSOR_TO_STRING(__clang_version__ )
#endif


#define INFINITY_COMPILER_DEBUG_BREAK() __builtin_trap()
#define INFINITY_COMPILER_ASSUME(X) __builtin_assume(X)


#define INFINITY_COMPILER_DLL_EXPORT __attribute__((visibility("default")))
#define INFINITY_COMPILER_DLL_EXPORT __attribute__((visibility("default")))


#define INFINITY_COMPILER_INLINE inline
#define INFINITY_COMPILER_FORCE_INLINE inline __attribute__((always_inline))
#define INFINITY_COMPILER_FORCE_NO_INLINE __attribute__((noinline))