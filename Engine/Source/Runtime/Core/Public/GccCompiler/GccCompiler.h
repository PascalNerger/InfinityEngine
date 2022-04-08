#pragma once


#if !defined(INFINITY_INCLUDE_PERMISSION_COMPILER_PLATFORM)
	#error "This file is not allowed to be included from any other file than CompilerPlatform.h."
#endif


#if !defined(INFINITY_PLATFORM_LINUX)
	#error "Infinity Engine supports GCC exclusively on Linux."
#endif


#if defined(__GNUC__)
	#if !defined(__clang__)
		#define INFINITY_COMPILER_GCC
		#define INFINITY_COMPILER_NAME PREPROCESSOR_TO_STRING(GCC)
		#define INFINITY_COMPILER_VERSION PREPROCESSOR_TO_STRING(__GNUC__)
	#endif
#endif


#define INFINITY_COMPILER_DEBUG_BREAK() raise(SIGTRAP)
#define INFINITY_COMPILER_ASSUME(X)


#define INFINITY_COMPILER_DLL_EXPORT __attribute__((visibility("default")))
#define INFINITY_COMPILER_DLL_IMPORT __attribute__((visibility("default")))


#define INFINITY_COMPILER_INLINE inline
#define INFINITY_COMPILER_FORCE_INLINE inline __attribute__((always_inline))
#define INFINITY_COMPILER_FORCE_NO_INLINE __attribute__((noinline))