#pragma once
#include "Car.h"
class Coupe : public Car
{
private: 
	int SafetyRating; 

public:
	Coupe();
	Coupe(string, string, string, int, int, int);
	string toString();
};