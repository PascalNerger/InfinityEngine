#pragma once


#define LOG(LogLevel, Message) GLog->Log(LogLevel, Message)
#define LOGF(LogLevel, Format, ...) GLog->Logf(LogLevel, Format, ##__VA_ARGS__)


#define LOG_TRACE(Message) LOG(LogLevel::Trace, Message)
#define LOG_DEBUG(Message) LOG(LogLevel::Debug, Message)
#define LOG_INFO(Message) LOG(LogLevel::Info, Message)
#define LOG_WARNING(Message) LOG(LogLevel::Warning, Message)
#define LOG_ERROR(Message) LOG(LogLevel::Error, Message)
#define LOG_FATAL(Message) LOG(LogLevel::Fatal, Message)


#define LOGF_TRACE(Format, ...) LOGF(LogLevel::Trace, Format, ##__VA_ARGS__)
#define LOGF_DEBUG(Format, ...) LOGF(LogLevel::Debug, Format, ##__VA_ARGS__)
#define LOGF_INFO(Format, ...) LOGF(LogLevel::Info, Format, ##__VA_ARGS__)
#define LOGF_WARNING(Format, ...) LOGF(LogLevel::Warning, Format, ##__VA_ARGS__)
#define LOGF_ERROR(Format, ...) LOGF(LogLevel::Error, Format, ##__VA_ARGS__)
#define LOGF_FATAL(Format, ...) LOGF(LogLevel::Fatal, Format, ##__VA_ARGS__)