#pragma once


#if !defined(INFINITY_INCLUDE_PERMISSION_UNIVERSAL_PLATFORM)
	#error "This file is not allowed to be included from any other file than UniversalPlatform.h."
#endif


namespace InfinityEngine
{

	/**
	 * Contains all primitive types which are universal to every platform.
	 */
	struct FUniversalPlatformTypes
	{

		using uint8 = unsigned char;
		using uint16 = unsigned short;
		using uint32 = unsigned int;
		using uint64 = unsigned long long;

		using int8 = signed char;
		using int16 = signed short;
		using int32 = signed int;
		using int64 = signed long long;

		using AnsiChar = char;
		using WideChar = wchar_t;

		using UtfChar8 = char8_t;
		using UtfChar16 = char16_t;
		using UtfChar32 = char32_t;

	};

}