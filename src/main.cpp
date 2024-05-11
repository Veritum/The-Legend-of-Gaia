#include "main.h"

int main(int argc, char* argv[]) {
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
		std::cerr << "SDL Initialisation failed. See main.cpp for more info" << SDL_GetError() << std::endl;
		return 1;	// Error Code: 1 - SDL failed to initialise
	}
	else {
		std::cout << "SDL Initialisation successful" << '\n';
	};

	if (IMG_Init(IMG_INIT_PNG) < 0) {
		std::cerr << "SDL_image Initialisation failed. See main.cpp for more info" << IMG_GetError() << std::endl;
		return 2;	// Error Code: 2 - SDL_image failed to initialise
	}
	else {
		std::cout << "SDL_image Initialisation successful" << '\n';
	};

	if (TTF_Init()) {
		std::cerr << "SDL_ttf Initialisation failed. See main.cpp for more info" << TTF_GetError() << std::endl;
		return 3;	// Error Code: 3 - SDL_ttf failed to initialise
	}
	else {
		std::cout << "SDL_ttf Initialisation successful" << '\n';
	};

	Window window("The Legend Of Gaia", WINDOWWIDTH, WINDOWHEIGHT);
	EventLoop eventLoop;

	eventLoop.Run();	// Equivalent of the eventloop in eventloop.cpp

	SDL_Quit();
	IMG_Quit();
	TTF_Quit();
};