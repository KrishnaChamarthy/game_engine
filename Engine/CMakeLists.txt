add_library(Engine SHARED
        src/Engine/Application.cpp
        src/Engine/Log.cpp
        src/Engine/Events/Event.h
        src/Engine/Events/KeyEvent.h
        src/Engine/Events/MouseEvent.h
        src/Engine/Events/ApplicationEvent.h
)

target_include_directories(Engine
        PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/src
        ${CMAKE_CURRENT_SOURCE_DIR}/vendor/spdlog/include
)

target_compile_definitions(Engine
        PRIVATE
        HZ_PLATFORM_MACOS
)

set_target_properties(Engine PROPERTIES
        OUTPUT_NAME "Engine"
)