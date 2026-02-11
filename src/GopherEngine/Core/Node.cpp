#include <GopherEngine/Core/Node.hpp>

namespace GopherEngine
{
    Node::Node()
    {
        // Initial position is slightly in front of the camera
        position_ = {0.f, 0.f, -2.f};

        // Quaternion constructor expects components in w, x, y, z order
        rotation_ = glm::quat(1.f, 0.f, 0.f, 0.f);

        scale_ = {1.f, 1.f, 1.f};
    }

    Node::~Node()
    {
    }

    void Node::update(float delta_time)
    {
        
    }

    void Node::draw()
    {
        
    }
}