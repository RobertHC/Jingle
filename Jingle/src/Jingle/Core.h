#pragma once

#ifdef JG_PLATFORM_WINDOWS // Does a check for if we're working in a windows environment. If not, move on

	#ifdef JG_BUILD_DLL // Does a check for is we're building the DLL file. If not, move on
		//When we build the engine, we want to export the dll info
		#define JINGLE_API __declspec(dllexport) // then redifine the exportation of the dll file to my macro here
	#else
		// When we build the application rather than just the engine, we want to import the dll info
		#define JINGLE_API __declspec(dllimport) // then redifine the importation of the dll file to my macro here
	#endif

#else// if not working in windows...
//scream, shout, make a lot of noise
#error Jingle only supports Windows (for now) 

#endif