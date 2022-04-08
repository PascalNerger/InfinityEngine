#include <iostream>

#include "Core.h"

namespace InfinityEngine
{

	FORCE_INLINE static int Main()
	{
		const TextChar* Text = TEXT("Sandbox");
		const InternalChar* InternalText = INTERNAL_TEXT("Sandbox");

		std::cout << FPlatformMath::Abs(-2.0f) << std::endl;

		return 0;
	}

}

int main()
{
	return InfinityEngine::Main();
}
