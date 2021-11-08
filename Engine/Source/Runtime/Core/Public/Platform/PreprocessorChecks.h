#pragma once


#if defined(INFINITY_PLATFORM_WINDOWS)
	#if defined(INFINITY_PLATFORM_LINUX)
		#error "Multiple platforms have been defined in preprocessor macros."
	#endif
	#if defined(INFINITY_PLATFORM_MAC)
		#error "Multiple platforms have been defined in preprocessor macros."
	#endif
#endif

#if defined(INFINITY_PLATFORM_LINUX)
	#if defined(INFINITY_PLATFORM_WINDOWS)
		#error "Multiple platforms have been defined in preprocessor macros."
	#endif
	#if defined(INFINITY_PLATFORM_MAC)
		#error "Multiple platforms have been defined in preprocessor macros."
	#endif
#endif

#if defined(INFINITY_PLATFORM_MAC)
	#if defined(INFINITY_PLATFORM_WINDOWS)
		#error "Multiple platforms have been defined in preprocessor macros."
	#endif
	#if defined(INFINITY_PLATFORM_LINUX)
		#error "Multiple platforms have been defined in preprocessor macros."
	#endif
#endif


#if defined(INFINITY_BUILD_DEBUG)
	#if defined(INFINITY_BUILD_RELEASE)
		#error "Multiple build configurations have been defined in preprocessor macros."
	#endif
	#if defined(INFINITY_BUILD_PRODUCTION)
		#error "Multiple build configurations have been defined in preprocessor macros."
	#endif
#endif

#if defined(INFINITY_BUILD_RELEASE)
	#if defined(INFINITY_BUILD_DEBUG)
		#error "Multiple build configurations have been defined in preprocessor macros."
	#endif
	#if defined(INFINITY_BUILD_PRODUCTION)
		#error "Multiple build configurations have been defined in preprocessor macros."
	#endif
#endif

#if defined(INFINITY_BUILD_PRODUCTION)
	#if defined(INFINITY_BUILD_DEBUG)
		#error "Multiple build configurations have been defined in preprocessor macros."
	#endif
	#if defined(INFINITY_BUILD_RELEASE)
		#error "Multiple build configurations have been defined in preprocessor macros."
	#endif
#endif


#if defined(INFINITY_BUILD_STATIC_LIB)
	#if defined(INFINITY_BUILD_DYNAMIC_LIB)
		#error "Multiple library types have been defined in preprocessor macros."
	#endif
#endif

#if defined(INFINITY_BUILD_DYNAMIC_LIB)
	#if defined(INFINITY_BUILD_STATIC_LIB)
		#error "Multiple library types have been defined in preprocessor macros."
	#endif
#endif