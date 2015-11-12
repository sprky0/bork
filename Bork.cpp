/*
	Bork.cpp - Library for demonstrating library includes from a shared location.
	Created by Avery Brooks, October 27, 2015.
	Released into the public domain.
*/
#include <Arduino.h>
#include <Bork.h>

unsigned long _startTime;
unsigned long _lastTime;

Bork::Bork()
{
	_lastTime = millis();
	_startTime = _lastTime;
}

unsigned long Bork::timeSinceCheck() {
	double now = millis();
	double diff = now - _lastTime;
	_lastTime = now;
	return diff;
}

unsigned long Bork::timeSinceStart() {
	double now = millis();
	return now - _startTime;
}
