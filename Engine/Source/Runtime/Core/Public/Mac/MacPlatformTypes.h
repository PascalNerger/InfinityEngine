#pragma once


#if !defined(INFINITY_INCLUDE_PERMISSION_MAC_PLATFORM)
	#error "This file is not allowed to be included from any other file than MacPlatform.h."
#endif


namespace InfinityEngine
{

	/**
	 * Extends the universal platform types with Mac specific platform types.
	 */
	struct FMacPlatformTypes : public FUniversalPlatformTypes
	{

		using PlatformSizeType = std::size_t;

	};

	using FPlatformTypes = FMacPlatformTypes;

}