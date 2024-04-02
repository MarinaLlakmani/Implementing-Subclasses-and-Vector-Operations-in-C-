#include "SUV.h"
#include <string>
#include "Car.h"
using namespace std;

SUV::SUV() : Car() {
	make = "invalid";
	model = "jeep";
	color = "black";
	year = 2000;
	MPG = 0;
	numOfSeats = 0;
}
SUV::SUV(string make, string model, string color, int year, int MPG, int numOfSeats){
	this->make = make;
	this->model = model;
	this->color = color;
	this->year = year;
	this->MPG = MPG;
	this->numOfSeats = numOfSeats;
}
string SUV::toString() {
    string carInfo = Car::toString();
    carInfo += " Number of Seats: " + to_string(numOfSeats);
    return carInfo;
}