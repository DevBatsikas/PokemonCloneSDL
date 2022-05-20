#include "headers/EventHandler.hpp"

EventHandler::EventHandler(bool& isRunning)
	:isRunning(isRunning)
{
}

EventHandler::~EventHandler()
{
}

void EventHandler::HandleEvents()
{
	while (SDL_PollEvent(&event))
	{
		if (event.type == SDL_QUIT)
			isRunning = false;
	}
}