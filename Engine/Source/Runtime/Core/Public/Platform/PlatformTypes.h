#pragma once


namespace InfinityEngine
{

	using uint8 = FPlatformTypes::uint8;
	using uint16 = FPlatformTypes::uint16;
	using uint32 = FPlatformTypes::uint32;
	using uint64 = FPlatformTypes::uint64;

	using int8 = FPlatformTypes::int8;
	using int16 = FPlatformTypes::int16;
	using int32 = FPlatformTypes::int32;
	using int64 = FPlatformTypes::int64;


	using AnsiChar = FPlatformTypes::AnsiChar;
	using WideChar = FPlatformTypes::WideChar;

	using UtfChar8 = FPlatformTypes::UtfChar8;
	using UtfChar16 = FPlatformTypes::UtfChar16;
	using UtfChar32 = FPlatformTypes::UtfChar32;


	namespace Internal
	{

		using DefaultChar = AnsiChar;

		template<int32 EncodingId>
		struct TSelectTextChar { using Type = DefaultChar; };

		template<> struct TSelectTextChar<INFINITY_PLATFORM_TEXT_ENCODING_ANSI_CODE> { using Type = AnsiChar; };
		template<> struct TSelectTextChar<INFINITY_PLATFORM_TEXT_ENCODING_WIDE_CODE> { using Type = WideChar; };
		template<> struct TSelectTextChar<INFINITY_PLATFORM_TEXT_ENCODING_UTF8_CODE> { using Type = UtfChar8; };
		template<> struct TSelectTextChar<INFINITY_PLATFORM_TEXT_ENCODING_UTF16_CODE> { using Type = UtfChar16; };
		template<> struct TSelectTextChar<INFINITY_PLATFORM_TEXT_ENCODING_UTF32_CODE> { using Type = UtfChar32; };

	}


	using TextChar = Internal::TSelectTextChar<INFINITY_PLATFORM_TEXT_ENCODING>::Type;
	using InternalChar = Internal::TSelectTextChar<INFINITY_PLATFORM_TEXT_ENCODING_INTERNAL>::Type;


	using PlatformSizeType = FPlatformTypes::PlatformSizeType;


	using VariadicArguments = va_list;


	namespace Internal
	{

		static_assert(sizeof(uint8) == 1, "Type test failed for uint8.");
		static_assert(sizeof(uint16) == 2, "Type test failed for uint16.");
		static_assert(sizeof(uint32) == 4, "Type test failed for uint32.");
		static_assert(sizeof(uint64) == 8, "Type test failed for uint64.");

		static_assert(sizeof(int8) == 1, "Type test failed for int8.");
		static_assert(sizeof(int16) == 2, "Type test failed for int16.");
		static_assert(sizeof(int32) == 4, "Type test failed for int32.");
		static_assert(sizeof(int64) == 8, "Type test failed for int64.");

		static_assert(int16(uint8(-1)) == 0xFF, "Type test failed for uint8 type sign.");
		static_assert(int32(uint16(-1)) == 0xFFFF, "Type test failed for uint16 type sign.");
		static_assert(int64(uint32(-1)) == 0xFFFFFFFF, "Type test failed for uint32 type sign.");
		static_assert(uint64(-1) > uint64(0), "Type test failed for uint32 type sign.");

		static_assert(sizeof(AnsiChar) == 1, "Type test failed for AnsiChar.");
		static_assert(sizeof(WideChar) == 2 || sizeof(WideChar) == 4, "Type test failed for WideChar.");

		static_assert(sizeof(UtfChar8) == 1, "Type test failed for UtfChar8.");
		static_assert(sizeof(UtfChar16) == 2, "Type test failed for UtfChar16.");
		static_assert(sizeof(UtfChar32) == 4, "Type test failed for UtfChar32.");

		static_assert(sizeof(PlatformSizeType) == 4 || sizeof(PlatformSizeType) == 8, "Type test failed for PlatformSizeType.");

	}

}