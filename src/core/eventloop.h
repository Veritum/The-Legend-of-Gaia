#pragma once

#ifndef EVENTLOOP_H
#define EVENTLOOP_H

#include "common.h"

class EventLoop {
public:
	EventLoop();
	~EventLoop();
	void Run();
};

#endif /* EVENTLOOP_H */