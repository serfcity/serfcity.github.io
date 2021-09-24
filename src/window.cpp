#include <SDL2/SDL.h>
#include "window.h"
#include "global.h"
#include "events.h"

namespace window
{

	Window::Window()
	{
		quit = false;
	}
	bool Window::isOpen()
	{
		return quit;
	}
	void Window::closeWindow()
	{
		quit = true;
	}
}
