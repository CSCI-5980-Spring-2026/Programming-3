#pragma once

#include <GopherEngine/Platform/Window.hpp>
#include <GopherEngine/Renderer/Renderer.hpp>

namespace GopherEngine
{
    class MainLoop
    {
        public:
            MainLoop();
            ~MainLoop();
            int run();

        // Protected members and functions are accessible to subclasses, but not to outside code
        protected:

            // Pure virtual functions to be implemented by subclasses
            virtual void initialize() = 0;

            // Protected member variables that can be accessed by subclasses
            Window window_;
            Renderer renderer_;
    };
}