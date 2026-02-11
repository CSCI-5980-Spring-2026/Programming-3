/* Programming 2: Runtime Engine Architecture
 * CSCI 5980, Spring 2026, University of Minnesota
 * Instructor: Evan Suma Rosenberg <suma@umn.edu>
 * License: Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International
 */ 

#include <GopherEngine/Core/MainLoop.hpp>
using namespace GopherEngine;

#include <iostream>
using namespace std;

// A simple subclass of MainLoop to test that the main loop is working
// and the window, scene, and node classes are functioning correctly
class GopherEngineTest: public MainLoop
{
	public:
		// Constructor and destructor
		GopherEngineTest();
		~GopherEngineTest();

	private:
		// Override the pure virtual functions from MainLoop
		void initialize() override;
		void update(float) override;
};

GopherEngineTest::GopherEngineTest() 
{

}

GopherEngineTest::~GopherEngineTest()
{

}

void GopherEngineTest::initialize() {

	// Set the window title to something more descriptive than "GopherEngine"
	window_.set_title("GopherEngine Test Application");

	// Create a single node in the scene to test that the update and draw functions are working
	scene_->create_node();
}

void GopherEngineTest::update(float delta_time) {

	// Print the delta time and FPS to the console for testing purposes
    cout << "Delta time: " << delta_time << " secoonds, FPS: " << 1.f / delta_time << endl;

}

int main()
{
	// Create an instance of the MainLoop subclass and start the main game loop
	GopherEngineTest app;
	return app.run();
}