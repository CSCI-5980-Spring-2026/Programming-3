#pragma once

#include <GopherEngine/Core/Node.hpp>

#include <vector>
#include <memory>
using namespace std;

namespace GopherEngine
{
    class Scene
    {
        public:
            Scene();
            ~Scene();
            void update(float delta_time);
            void draw();
            void add_node(shared_ptr<Node> node);
            shared_ptr<Node> create_node();

        private:
           vector<shared_ptr<Node>> nodes_;
    };
}