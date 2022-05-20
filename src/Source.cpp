#include <SDL.h>

#include "headers/WindowHandler.hpp"

int main(int argc, char* args[])
{
	if (SDL_Init(SDL_INIT_VIDEO))
		std::cerr << "Error initializing SDL: " << SDL_GetError() << std::endl;

	WindowHandler window{"Pokemon Clone", 1280, 720};

	window.Start();

	SDL_Quit();

	return 0;
}
