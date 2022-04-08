#pragma once


namespace InfinityEngine
{

	struct FUniversalPlatformString
	{

		FORCE_INLINE static int32 Vsnprintf(AnsiChar* DestinationBuffer, const PlatformSizeType DestinationBufferSize, const AnsiChar* Format, VariadicArguments VarArgs)
		{
			return std::vsnprintf(DestinationBuffer, DestinationBufferSize, Format, VarArgs);
		}

	};

}