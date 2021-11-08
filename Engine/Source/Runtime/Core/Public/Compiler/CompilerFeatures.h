#pragma once


#if !defined(INFINITY_INCLUDE_PERMISSION_COMPILER_PLATFORM)
	#error "This file is not allowed to be included from any other file than CompilerPlatform.h."
#endif


#if !__has_cpp_attribute(likely)
	#error "Deprecated compiler version. The compiler is expected to support [[likely]]."
#endif

#if !__has_cpp_attribute(unlikely)
#error "Deprecated compiler version. The compiler is expected to support [[unlikely]]."
#endif

#if !defined(__cpp_if_constexpr)
	#error "Deprecated compiler version. The compiler is expected to support if constexpr."
#endif

#if !defined(__cpp_fold_expressions)
	#error "Deprecated compiler version. The compiler is expected to support fold expressions."
#endif

#if !defined(__cpp_char8_t)
	#error "Deprecated compiler version. The compiler is expected to support char8_t."
#endif


