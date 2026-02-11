#pragma once

#include <glm/glm.hpp>
#include <glm/gtc/quaternion.hpp>

namespace GopherEngine
{
    class Node
    {
        public:
            Node();
            ~Node();
            void update(float delta_time);
            void draw();

        private:
            glm::vec3 position_;
            glm::quat rotation_;
            glm::vec3 scale_;
    };
}