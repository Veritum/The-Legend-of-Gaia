#pragma once

#ifndef WINDOW_H
#define WINDOW_H 

#include "common.h"

const unsigned int WINDOWWIDTH = 1920;	// The width of the window
const unsigned int WINDOWHEIGHT = 1080; // The height of the window

class Window {
public:
	Window(const char* title, int width, int height);
	~Window();
	SDL_Window* getWindow();
private:
	SDL_Window* window;		// Window state
};

#endif /* WINDOW_H */