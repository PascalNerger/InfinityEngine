#pragma once


namespace InfinityEngine
{

	struct FWindowsPlatformTime : public FUniversalPlatformTime
	{

	};

	using FPlatformTime = FWindowsPlatformTime;

}