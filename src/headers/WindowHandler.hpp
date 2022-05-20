#pragma once
#include <iostream>
#include <SDL.h>

#include "EventHandler.hpp"

class WindowHandler
{
public:
	// Creates window and renderer and updates the main loop boolean.
	WindowHandler(const char* windowTitle, int windowWidth, int windowHeight);
	~WindowHandler();

	void Start();

private:
	SDL_Window* window;
	SDL_Renderer* renderer;
	
	// Main loop boolean.
	bool isRunning = false;

	EventHandler eventHandler{isRunning};
};
