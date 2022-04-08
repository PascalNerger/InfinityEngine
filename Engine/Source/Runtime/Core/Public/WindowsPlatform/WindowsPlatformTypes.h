#pragma once


#if !defined(INFINITY_INCLUDE_PERMISSION_WINDOWS_PLATFORM)
	#error "This file is not allowed to be included from any other file than WindowsPlatform.h."
#endif


namespace InfinityEngine
{

	/**
	 * Extends the universal platform types with Windows specific platform types.
	 */
	struct FWindowsPlatformTypes : public FUniversalPlatformTypes
	{

		using PlatformSizeType = std::size_t;

	};

	using FPlatformTypes = FWindowsPlatformTypes;

}