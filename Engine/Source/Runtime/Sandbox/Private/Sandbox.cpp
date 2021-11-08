#include <iostream>

#include "Platform.h"

namespace InfinityEngine
{

	FORCE_INLINE static int Main()
	{
		std::cout << "Sandbox" << std::endl;
		std::cout << "Compiler: " << INFINITY_COMPILER_NAME << ", Version: " << INFINITY_COMPILER_VERSION << std::endl;

		const TextChar* Text = TEXT("Text");
		const InternalChar* Internal = TEXT_INTERNAL("Internal");

		CHECK(Text);
		CHECK(Internal);

		return 0;
	}

}

int main()
{
	return InfinityEngine::Main();
}
