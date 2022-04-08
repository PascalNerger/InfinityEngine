#pragma once


namespace InfinityEngine
{

	/**
	 * The global logging interface.
	 * This is used to log messages to one or multiple devices.
	 *
	 * Important:
	 *	- Logging should be done in english anyways, hence only InternalChar is supported.
	 *
	 * Note:
	 *	- At the moment only one logging device is supported.
	 */
	class INFINITY_API FLog
	{

	public:

		/**
		 * Default constructor.
		 */
		FLog() = default;

		/**
		 * Default move constructor.
		 */
		FLog(FLog&&) = default;

		/**
		 * Default move assignment operator.
		 */
		FLog& operator=(FLog&&) = delete;

		/**
		 * Non copyable.
		 */
		FLog(const FLog&) = delete;

		/**
		 * Non copyable.
		 */
		FLog& operator=(const FLog&) = delete;

		/**
		 * Default destructor.
		 */
		~FLog() = default;

	public:

		/**
		 * Logs a message to the registered log devices.
		 * 
		 * @param Level The log level.
		 * @param Message The message to log.
		 */
		FORCE_INLINE void Log(const LogLevel Level, const InternalChar* Message) const
		{
			CHECK(Level != LogLevel::None);
			CHECK(Level < LogLevel::Invalid);
			CHECK(Message);

			LogDevice->Log(Level, Message);
		}

		/**
		 * Logs a message to the registered log devices.
		 *
		 * @param Level The log level.
		 * @param Format The message format string.
		 * @param ... The arguments used by the formatted string.
		 */
		void Logf(const LogLevel Level, const InternalChar* Format, ...) const
		{
			CHECK(Level != LogLevel::None);
			CHECK(Level < LogLevel::Invalid);
			CHECK(Format);

			VariadicArguments VarArgs;
			VARIADIC_ARGUMENTS_START(VarArgs, Format);

			LogDevice->Logf(Level, Format, VarArgs);
			VARIADIC_ARGUMENTS_END(VarArgs);
		}

		/**
		 * Adds a log device as logging target to the logger.
		 *
		 * @param Device The log device to add.
		 */
		FORCE_INLINE void AddLogDevice(FLogDevice* Device)
		{
			LogDevice = Device;
		}

	public:

		/**
		 * The device to log to.
		 */
		FLogDevice* LogDevice;

	};

}