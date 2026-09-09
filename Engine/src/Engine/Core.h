//
// Created by Krishna Chamarthy on 09/09/26.
//

#ifndef ENGINE_CORE_H
#define ENGINE_CORE_H

#ifdef EG_PLATFORM_WINDOWS
    #ifdef EG_BUILD_DLL
        #define ENGINE_API __declspec(dllexport)
    #else
        #define ENGINE_API __declspec(dllimport)
    #endif
#endif

#define ENGINE_API // Remove for windows

#endif //ENGINE_CORE_H
