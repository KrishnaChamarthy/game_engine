add_library(Engine SHARED
        src/Engine.h
        src/Engine/Core.h
        src/Engine/Application.cpp
        src/Engine/Application.h
        src/Engine/EntryPoint.h
)

target_include_directories(Engine
        PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)