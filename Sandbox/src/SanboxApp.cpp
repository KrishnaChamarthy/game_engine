//
// Created by Krishna Chamarthy on 09/09/26.
//
#include <Engine.h>

class Sandbox : public Engine::Application {
public:
    Sandbox() {

    }
    ~Sandbox() {

    }
};

Engine::Application* Engine::CreateApplication() {
    return new Sandbox();
}