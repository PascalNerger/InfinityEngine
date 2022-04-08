#pragma once


#define INFINITY_CHECK_IMPL(Expr) \
	{ \
		if(!(Expr)) [[unlikely]] \
		{ \
			DEBUG_BREAK(); \
			ASSUME(false); \
		} \
	}


#if defined(INFINITY_BUILD_ENABLE_DEBUG_CHECKS)
	#define CHECK(Expr) INFINITY_CHECK_IMPL(Expr)
#else
	#define CHECK(Expr)
#endif
