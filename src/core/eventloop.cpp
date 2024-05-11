#include "eventloop.h"

EventLoop::EventLoop() {};

EventLoop::~EventLoop() {};

void EventLoop::Run() {
	SDL_Event event;	// Used to store event data
	bool running = true;	// Flag to check if the program is running

	while (running) {	// Loop that runs whilst running is true
		while (SDL_PollEvent(&event)) {		// Polls for any events
			if (event.type == SDL_QUIT) {	// Checks if the event type is SDL_QUIT, if it is...
				running = false;	// Set running to false, thus closing the program
			};
		};
	};
};