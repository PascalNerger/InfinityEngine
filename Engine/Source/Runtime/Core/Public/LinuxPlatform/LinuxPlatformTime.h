#pragma once



namespace InfinityEngine
{

	struct FLinuxPlatformTime : public FUniversalPlatformTime
	{

	};

	using FPlatformTime = FLinuxPlatformTime;

}