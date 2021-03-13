#pragma once

#ifdef CR_PLATFORM_WINDOWS
	#ifdef CR_BUILD_DLL
		#define CRUMBLE_API __declspec(dllexport)
	#else
		#define CRUMBLE_API __declspec(dllimport)
	#endif
#else
	#error Crumble currently supports Windows only :)
#endif