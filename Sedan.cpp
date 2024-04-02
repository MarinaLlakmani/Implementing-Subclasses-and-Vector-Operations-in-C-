#include "Sedan.h"
#include "Car.h"
#include <string>
using namespace std;

Sedan::Sedan() : Car() {
	make = "invalid";
	model = "jeep";
	color = "black";
	year = 2000;
	MPG = 0;
	numOfAirbags= 0;

}
Sedan::Sedan(string make, string model, string color, int year, int MPG, int numOfAirbags) {
	this->make = make;
	this->model = model;
	this->color = color;
	this->year = year;
	this->MPG = MPG;
	this->numOfAirbags = numOfAirbags;

}

string Sedan::toString() {
	string carInfo = Car::toString();
	carInfo += " Number of Airbags: " + to_string(numOfAirbags);
	return carInfo;
}