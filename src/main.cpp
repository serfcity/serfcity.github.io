#include <iostream>
#include <SDL2/SDL.h>
#include "window.h"
#include "events.h"

namespace window
{
	Window main_win;
}

int main(int argc, char* argv[])
{

	if(SDL_Init(SDL_INIT_EVERYTHING) != 0)
	{
		SDL_Log("Unable to initialize SDL: %s", SDL_GetError());
        	return 1;
	}
	
	window::main_win.win = SDL_CreateWindow("X-World!!!", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, 0);
	if (window::main_win.win == NULL) 
	{
        	// In the case that the window could not be made...
        	printf("Could not create window: %s\n", SDL_GetError());
        	return 1;
    	}

	window::main_win.isOpen() ? printf("Opened!\n") : printf("NO!\n"); //Debug

	while(1)
	{
		events::eventSpooler();
	}

	    SDL_DestroyWindow(window::main_win.win);
	return 0;
}
