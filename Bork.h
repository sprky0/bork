/*
	Bork.h - Library for demonstrating library includes from a shared location.
	Created by Avery Brooks, October 27, 2015.
	Released into the public domain.
*/

#ifndef BORK_H
#define BORK_H

class Bork
{
	public:
		Bork();
		unsigned long timeSinceCheck();
		unsigned long timeSinceStart();
	private:
		unsigned long _startTime;
		unsigned long _lastTime;
};

#endif
