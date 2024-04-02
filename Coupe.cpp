#include "Coupe.h"
#include <string>
#include "Car.h"
using namespace std;

Coupe::Coupe() : Car(){
	make = "invalid";
	model = "jeep";
	color = "black";
	year = 2000;
	MPG = 0;
	SafetyRating = 0;
}

Coupe::Coupe(string make, string model, string color, int year, int MPG, int SafetyRating) {
	this->make = make;
	this->model = model;
	this->color = color;
	this->year = year;
	this->MPG = MPG;
	this->SafetyRating = SafetyRating;
}

string Coupe::toString() {
    string carInfo = Car::toString();
    carInfo += " Safety Rating: " + to_string(SafetyRating);
    return carInfo;
}