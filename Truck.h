#pragma once
#include "Car.h"
class Truck : public Car
{
private:
	int bedCapacity;
public:
	Truck();
	Truck(string, string, string, int, int, int);
	string toString();
};

