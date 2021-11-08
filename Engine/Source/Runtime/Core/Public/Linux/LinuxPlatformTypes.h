#pragma once


#if !defined(INFINITY_INCLUDE_PERMISSION_LINUX_PLATFORM)
	#error "This file is not allowed to be included from any other file than LinuxPlatform.h."
#endif


namespace InfinityEngine
{

	/**
	 * Extends the universal platform types with Linux specific platform types.
	 */
	struct FLinuxPlatformTypes : public FUniversalPlatformTypes
	{

		using PlatformSizeType = std::size_t;

	};

	using FPlatformTypes = FLinuxPlatformTypes;

}