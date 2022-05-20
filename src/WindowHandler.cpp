#include "headers/WindowHandler.hpp"

WindowHandler::WindowHandler(const char* windowTitle, int windowWidth, int windowHeight)
	:window(nullptr), renderer(nullptr)
{
	window = SDL_CreateWindow(windowTitle, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, windowWidth, windowHeight, SDL_WINDOW_SHOWN);

	if (!window) std::cerr << "Error initializing window: " << SDL_GetError() << std::endl;
	else
	{
		renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
		if (!renderer) std::cerr << "Error initializing renderer: " << SDL_GetError() << std::endl;
		else isRunning = true;
	}
}

WindowHandler::~WindowHandler()
{
	SDL_DestroyWindow(window);
}

void WindowHandler::Start()
{
	while (isRunning)
	{
		eventHandler.HandleEvents();
	}
}