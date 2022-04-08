#pragma once


namespace InfinityEngine
{

	/**
	 * A device which can be used as a logging target.
	 * This interface must be overriden for diverse logging targets, e.g. the console, a file, ...
	 */
	class INFINITY_API FLogDevice
	{

	public:

		/**
		 * Default constructor.
		 */
		FLogDevice() = default;

		/**
		 * Default move constructor.
		 */
		FLogDevice(FLogDevice&&) = default;

		/**
		 * Default move assignment operator.
		 */
		FLogDevice& operator=(FLogDevice&&) = default;

		/**
		 * Non copyable.
		 */
		FLogDevice(const FLogDevice&) = delete;

		/**
		 * Non copyable.
		 */
		FLogDevice& operator=(const FLogDevice&) = delete;

		/**
		 * Default virtual destructor.
		 */
		virtual ~FLogDevice() = default;

		/**
		 * Logs a message on the current device.
		 *
		 * @param Level The log level.
		 * @param Message The message to log.
		 */
		virtual void Log(const LogLevel Level, const InternalChar* Message) const = 0;

		/**
		 * Logs a formatted message on the current device.
		 *
		 * @param Level The log level.
		 * @param Message The message format string.
		 * @param VarArgs The arguments used by the format string.
		 */
		virtual void Logf(const LogLevel Level, const InternalChar* Format, VariadicArguments VarArgs) const = 0;

	};

	/**
	 * A default implementation provided for logging to the application console.
	 */
	class INFINITY_API FConsoleLogDevice : public FLogDevice
	{

	public:

		/**
		 * Default constructor.
		 */
		FConsoleLogDevice() = default;

		/**
		 * Default move constructor.
		 */
		FConsoleLogDevice(FConsoleLogDevice&&) = default;

		/**
		 * Default move assignment operator.
		 */
		FConsoleLogDevice& operator=(FConsoleLogDevice&&) = default;

		/**
		 * Non copyable.
		 */
		FConsoleLogDevice(const FConsoleLogDevice&) = delete;

		/**
		 * Non copyable.
		 */
		FConsoleLogDevice& operator=(const FConsoleLogDevice&) = delete;

		/**
		 * Default virtual destructor.
		 */
		virtual ~FConsoleLogDevice() = default;

		/**
		 * Logs a message on the current device.
		 *
		 * @param Message The message to log.
		 * @param Level The log level.
		 */
		virtual void Log(const LogLevel Level, const InternalChar* Message) const override;

		/**
		 * Logs a formatted message on the current device.
		 *
		 * @param Level The log level.
		 * @param Message The message format string.
		 * @param VarArgs The arguments used by the format string.
		 */
		virtual void Logf(const LogLevel Level, const InternalChar* Format, VariadicArguments VarArgs) const override;

	private:

		/**
		 * Gets the default ANSI color escape code depending on the log level.
		 *
		 * @param Level The log level.
		 *
		 * @return The ANSI escape code color for the given log level.
		 */
		FORCE_INLINE constexpr static const InternalChar* GetAnsiEscapeColorString(const LogLevel Level)
		{
			switch (Level)
			{
				case LogLevel::Trace: return "\x1B[95m";
				case LogLevel::Debug: return "\x1B[94m";
				case LogLevel::Info: return "\x1B[97m";
				case LogLevel::Warning: return "\x1B[93m";
				case LogLevel::Error: return "\x1B[91m";
				case LogLevel::Fatal: return "\x1B[90m";

				default: return "\x1B[95m";
			}
		}

	};

}