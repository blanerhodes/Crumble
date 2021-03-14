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

#ifdef CR_ENABLE_ASSERTS
	#define CR_ASSERT(x, ...) { if(!(x)) { CR_ERROR("Assertion Failed: {0}", __VA_ARGS__; __debugbreak(); } }
	#define CR_CORE_ASSERT(x, ...) { if(!(x)) { CR_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define CR_ASSERT(x, ...)
	#define CR_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)