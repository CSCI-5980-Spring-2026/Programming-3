#include <GopherEngine/Core/Scene.hpp>

namespace GopherEngine
{
    Scene::Scene() {
    }

    Scene::~Scene() {
    }

    void Scene::update(float delta_time) {
        for(auto& node: nodes_) {
            node->update(delta_time);
        }
    }

    void Scene::draw() {
        for(auto& node: nodes_) {
            node->draw();
        }
    }

    void Scene::add_node(shared_ptr<Node> node)
    {
        nodes_.push_back(node);
    }

    shared_ptr<Node> Scene::create_node()
    { 
        auto node = make_shared<Node>();
        add_node(node);
        return node;
    }
}