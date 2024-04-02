#pragma once
#include "Car.h"
class Sedan : public Car
{
private:
	int numOfAirbags;
public:
	Sedan();
	Sedan(string, string, string, int, int, int);
	string toString();
};

