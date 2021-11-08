#pragma once


#if !defined(INFINITY_INCLUDE_PERMISSION_PLATFORM)
	#error "This file is not allowed to be included from any other file than Platform.h."
#endif


#if defined(INFINITY_BUILD_DEBUG)
	#define INFINITY_BUILD_ENABLE_DEBUG_CHECKS
#endif

#if defined(INFINITY_BUILD_RELEASE)
	#define INFINITY_BUILD_ENABLE_DEBUG_CHECKS
	#define INFINITY_BUILD_ENABLE_INLINE
#endif

#if defined(INFINITY_BUILD_PRODUCTION)
	#define INFINITY_BUILD_ENABLE_FORCE_INLINE
#endif