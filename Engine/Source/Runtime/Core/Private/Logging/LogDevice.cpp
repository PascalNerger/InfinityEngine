#include "Core.h"


#include <iostream>


namespace InfinityEngine
{

	void FConsoleLogDevice::Log(const LogLevel Level, const InternalChar* Message) const
	{
		std::cout << GetAnsiEscapeColorString(Level) << Message << "\033[0m\t\t" << std::endl;
	}

	void FConsoleLogDevice::Logf(const LogLevel Level, const InternalChar* Format, VariadicArguments VarArgs) const
	{
		constexpr static PlatformSizeType BufferSize = 4096;
		InternalChar Buffer[BufferSize];

		int32 Result = FPlatformString::Vsnprintf(Buffer, BufferSize, Format, VarArgs);
		CHECK(Result >= 0);

		std::cout << GetAnsiEscapeColorString(Level) << Buffer << "\033[0m\t\t" << std::endl;
	}

}