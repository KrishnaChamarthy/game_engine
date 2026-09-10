//
// Created by Krishna Chamarthy on 10/09/26.
//

#ifndef ENGINE_ENTRYPOINT_H
#define ENGINE_ENTRYPOINT_H
#include "Application.h"

extern Engine::Application* Engine::CreateApplication();

int main(int argc, char** argv) {
    Engine::Log::Init();
    EG_CORE_WARN("Initialized Core Log!");
    int a = 5;
    EG_INFO("Hello Var={0}", a);

    auto app = Engine::CreateApplication();
    app->Run();
    delete app;
    return 0;
}

#endif //ENGINE_ENTRYPOINT_H
