//
// Created by Krishna Chamarthy on 10/09/26.
//

#ifndef ENGINE_ENTRYPOINT_H
#define ENGINE_ENTRYPOINT_H
#include "Application.h"

extern Engine::Application* Engine::CreateApplication();

int main(int argc, char** argv) {
    auto app = Engine::CreateApplication();
    app->Run();
    delete app;
    return 0;
}

#endif //ENGINE_ENTRYPOINT_H
