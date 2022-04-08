#pragma once


namespace InfinityEngine
{

	/**
	 * Holds all possible log levels.
	 */
	enum class LogLevel : uint32
	{

		/**
		 * No log level.
		 */
		None = 0,

		/**
		 * Trace log level.
		 */
		Trace = 1,

		/**
		 * Debug log level.
		 */
		Debug = 2,

		/**
		 * Info log level.
		 */
		Info = 3,

		/**
		 * Warning log level.
		 */
		Warning = 4,

		/**
		 * Error log level.
		 */
		Error = 5,

		/**
		 * Fatal log level.
		 */
		Fatal = 6,

		/**
		 * Invalid log level.
		 */
		Invalid = 7,

	};

}