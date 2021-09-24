#include <SDL2/SDL.h>
#include "window.h"
#include "global.h"



namespace events
{
    void eventSpooler()
    {
    if(!window::main_win.isOpen())
        {
	    SDL_Quit();
        }
    }
} 
