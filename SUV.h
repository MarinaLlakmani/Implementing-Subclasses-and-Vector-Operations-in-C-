#pragma once
#include "Car.h"
class SUV : public Car
{
private:
	int numOfSeats;
public:
	SUV();
	SUV(string, string, string, int, int, int);
	string toString();
};

