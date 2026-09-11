//
// Created by Krishna Chamarthy on 09/09/26.
//

#include "Application.h"

#include "Engine/Events/ApplicationEvent.h"
#include "Engine/Log.h"

namespace Engine {

    Application::Application() {

    }

    Application::~Application() {

    }

    void Application::Run() {
        WindowsResizeEvent e(1200, 720);
        EG_TRACE(e.ToString());

        while (true);
    }
}