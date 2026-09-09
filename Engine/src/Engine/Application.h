//
// Created by Krishna Chamarthy on 09/09/26.
//

#ifndef ENGINE_APPLICATION_H
#define ENGINE_APPLICATION_H

#include "Core.h"

namespace Engine {

    class ENGINE_API Application {
    public:
        Application();
        virtual ~Application();
        void Run();
    };

    Application* CreateApplication();
}


#endif //ENGINE_APPLICATION_H
