#pragma once


#define INSERT_TEXT_ANSI(x) x
#define INSERT_TEXT_WIDE(x) L##x
#define INSERT_TEXT_UTF8(x) u8##x
#define INSERT_TEXT_UTF16(x) u##x
#define INSERT_TEXT_UTF32(x) U##x

#define TEXT_ANSI(X) INSERT_TEXT_ANSI(X)
#define TEXT_WIDE(X) INSERT_TEXT_WIDE(X)
#define TEXT_UTF8(X) INSERT_TEXT_UTF8(X)
#define TEXT_UTF16(X) INSERT_TEXT_UTF16(X)
#define TEXT_UTF32(X) INSERT_TEXT_UTF32(X)


#if INFINITY_PLATFORM_TEXT_ENCODING == INFINITY_PLATFORM_TEXT_ENCODING_ANSI_CODE
	#define INFINITY_PLATFORM_TEXT_ENCODING_ANSI
#elif INFINITY_PLATFORM_TEXT_ENCODING == INFINITY_PLATFORM_TEXT_ENCODING_WIDE_CODE
	#define INFINITY_PLATFORM_TEXT_ENCODING_WIDE
#elif INFINITY_PLATFORM_TEXT_ENCODING == INFINITY_PLATFORM_TEXT_ENCODING_UTF8_CODE
	#define INFINITY_PLATFORM_TEXT_ENCODING_UTF8
#elif INFINITY_PLATFORM_TEXT_ENCODING == INFINITY_PLATFORM_TEXT_ENCODING_UTF16_CODE
	#define INFINITY_PLATFORM_TEXT_ENCODING_UTF16
#elif INFINITY_PLATFORM_TEXT_ENCODING == INFINITY_PLATFORM_TEXT_ENCODING_UTF32_CODE
	#define INFINITY_PLATFORM_TEXT_ENCODING_UTF32
#else
	#define INFINITY_PLATFORM_TEXT_ENCODING_ANSI
#endif


#if INFINITY_PLATFORM_TEXT_ENCODING_INTERNAL == INFINITY_PLATFORM_TEXT_ENCODING_ANSI_CODE
	#define INFINITY_PLATFORM_TEXT_ENCODING_INTERNAL_ANSI
#elif INFINITY_PLATFORM_TEXT_ENCODING_INTERNAL == INFINITY_PLATFORM_TEXT_ENCODING_WIDE_CODE
	#define INFINITY_PLATFORM_TEXT_ENCODING_INTERNAL_WIDE
#elif INFINITY_PLATFORM_TEXT_ENCODING_INTERNAL == INFINITY_PLATFORM_TEXT_ENCODING_UTF8_CODE
	#define INFINITY_PLATFORM_TEXT_ENCODING_INTERNAL_UTF8
#elif INFINITY_PLATFORM_TEXT_ENCODING_INTERNAL == INFINITY_PLATFORM_TEXT_ENCODING_UTF16_CODE
	#define INFINITY_PLATFORM_TEXT_ENCODING_INTERNAL_UTF16
#elif INFINITY_PLATFORM_TEXT_ENCODING_INTERNAL == INFINITY_PLATFORM_TEXT_ENCODING_UTF32_CODE
	#define INFINITY_PLATFORM_TEXT_ENCODING_INTERNAL_UTF32
#else
	#define INFINITY_PLATFORM_TEXT_ENCODING_INTERNAL_ANSI
#endif


#if defined(INFINITY_PLATFORM_TEXT_ENCODING_ANSI)
	#define TEXT(X) TEXT_ANSI(X)
#elif defined(INFINITY_PLATFORM_TEXT_ENCODING_WIDE)
	#define TEXT(X) TEXT_WIDE(X)
#elif defined(INFINITY_PLATFORM_TEXT_ENCODING_UTF8)
	#define TEXT(X) TEXT_UTF8(X)
#elif defined(INFINITY_PLATFORM_TEXT_ENCODING_UTF16)
	#define TEXT(X) TEXT_UTF16(X)
#elif defined(INFINITY_PLATFORM_TEXT_ENCODING_UTF32)
	#define TEXT(X) TEXT_UTF32(X)
#else
	#define TEXT(X) TEXT_ANSI(X)
#endif


#if defined(INFINITY_PLATFORM_TEXT_ENCODING_INTERNAL_ANSI)
	#define TEXT_INTERNAL(X) TEXT_ANSI(X)
#elif defined(INFINITY_PLATFORM_TEXT_ENCODING_INTERNAL_WIDE)
	#define TEXT_INTERNAL(X) TEXT_WIDE(X)
#elif defined(INFINITY_PLATFORM_TEXT_ENCODING_INTERNAL_UTF8)
	#define TEXT_INTERNAL(X) TEXT_UTF8(X)
#elif defined(INFINITY_PLATFORM_TEXT_ENCODING_INTERNAL_UTF16)
	#define TEXT_INTERNAL(X) TEXT_UTF16(X)
#elif defined(INFINITY_PLATFORM_TEXT_ENCODING_INTERNAL_UTF32)
	#define TEXT_INTERNAL(X) TEXT_UTF32(X)
#else
	#define TEXT_INTERNAL(X) TEXT_ANSI(X)
#endif

