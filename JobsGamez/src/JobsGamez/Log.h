#pragma once

#include <memory.h>
#include "Core.h"
#include "spdlog\spdlog.h"

namespace JobsGamez {

	class JG_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() {return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}


//Core log macros
#define JG_CORE_ERROR(...)    ::JobsGamez::Log::GetCoreLogger()->error(__VA_ARGS__)
#define JG_CORE_WARN(...)     ::JobsGamez::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define JG_CORE_INFO(...)     ::JobsGamez::Log::GetCoreLogger()->info(__VA_ARGS__)
#define JG_CORE_TRACE(...)    ::JobsGamez::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define JG_CORE_FATAL(...)    ::JobsGamez::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client log macros
#define JG_ERROR(...)         ::JobsGamez::Log::GetClientLogger()->error(__VA_ARGS__)
#define JG_WARN(...)          ::JobsGamez::Log::GetClientLogger()->warn(__VA_ARGS__)
#define JG_INFO(...)          ::JobsGamez::Log::GetClientLogger()->info(__VA_ARGS__)
#define JG_TRACE(...)         ::JobsGamez::Log::GetClientLogger()->trace(__VA_ARGS__)
#define JG_FATAL(...)         ::JobsGamez::Log::GetClientLogger()->fatal(__VA_ARGS__)