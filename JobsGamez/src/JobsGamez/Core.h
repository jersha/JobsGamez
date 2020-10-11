#pragma once

#ifdef JG_PLATFORM_WINDOWS
	#ifdef JG_BUILD_DLL
		#define JG_API __declspec(dllexport)
	#else
		#define JG_API __declspec(dllimport)
	#endif
#else
	#error JobsGamez only supports Windows!
#endif