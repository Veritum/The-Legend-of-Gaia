#include "window.h"

Window::Window(const char* title, int width, int height) {
	window = SDL_CreateWindow(
		title,
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		width,
		height,
		SDL_WINDOW_OPENGL);

	if (window == nullptr) {
		std::cerr << "Window creation failed. See src/window.cpp for more info" << SDL_GetError() << std::endl;
		exit(4);	// Error Code: 4 - SDL failed to create the window
	}
	else {
		std::cout << "Window created" << '\n';
	};
};

Window::~Window() {
	SDL_DestroyWindow(window);

	if (window == nullptr) {
		std::cerr << "Window destruction failed. See src/window.cpp for more info" << SDL_GetError() << std::endl;
		exit(5);	// Error Code: 5 - SDL failed to destroy the window
	}
	else {
		std::cout << "Window destroyed" << '\n';
	};
};

SDL_Window* Window::getWindow() {
	return window;
};