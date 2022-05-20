#pragma once
#include <SDL.h>

class EventHandler
{
public:
	EventHandler(bool& isRunning);
	~EventHandler();

	void HandleEvents();

private:
	SDL_Event event;
	bool& isRunning;
};
