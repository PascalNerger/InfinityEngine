#include <iostream>
#include <string>
#include <chrono>

#include "Core.h"

namespace InfinityEngine
{

	FORCE_INLINE static void SetupWindowsConsole()
	{
#if defined(INFINITY_PLATFORM_WINDOWS)
		HANDLE handleOut = GetStdHandle(STD_OUTPUT_HANDLE);
		DWORD consoleMode;
		GetConsoleMode(handleOut, &consoleMode);
		consoleMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
		consoleMode |= DISABLE_NEWLINE_AUTO_RETURN;
		SetConsoleMode(handleOut, consoleMode);
#endif
	}

	FORCE_INLINE static int Main()
	{
		SetupWindowsConsole();

		GLog = new FLog();
		FLogDevice *LogDevice = new FConsoleLogDevice();

		GLog->AddLogDevice(LogDevice);

		LOG_INFO(INTERNAL_TEXT("Sandbox"));
		LOGF_INFO("%s %s (%s %s) bla", INTERNAL_TEXT("Compiler:"), INFINITY_COMPILER_NAME, INTERNAL_TEXT("Version"), INFINITY_COMPILER_VERSION);

		LOG_TRACE(INTERNAL_TEXT("This is a trace log."));
		LOG_DEBUG(INTERNAL_TEXT("This is a debug log."));
		LOG_INFO(INTERNAL_TEXT("This is an info log."));
		LOG_WARNING(INTERNAL_TEXT("This is a warning log."));
		LOG_ERROR(INTERNAL_TEXT("This is an error log."));
		LOG_FATAL(INTERNAL_TEXT("This is a fatal log."));

		std::time_t now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

		std::string s(30, '\0');
		std::strftime(&s[0], s.size(), "%Y-%m-%d %H:%M:%S", std::localtime(&now));

		LOGF_WARNING(INTERNAL_TEXT("[%s] [%s] %s %.2f"), INTERNAL_TEXT("Sandbox"), INTERNAL_TEXT(s.c_str()), INTERNAL_TEXT("Hello Formatted Logging"), 3.2f);

		delete LogDevice;
		delete GLog;

		return 0;
	}

}

int main()
{
	return InfinityEngine::Main();
}
