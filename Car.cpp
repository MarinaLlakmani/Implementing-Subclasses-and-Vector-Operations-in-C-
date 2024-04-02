#include "Car.h"
#include <string>
#include <vector>
using namespace std;

Car::Car() : year(0), MPG(0) {}

Car::~Car() {};

Car::Car(string make, string model, string color, int year, int MPG) : make(make),
model(model), color(color), year(year), MPG(MPG) {}


void Car::setMake(string make) {
	this->make = make;
}

void Car::setModel(string model) {
	this->model = model;
}

void Car::setColor(string color) {
	this->color = color;
}

void Car::setYear(int year) {
	this->year = year;
}
void Car::setMPG(int MPG) {

	this->MPG = MPG;
}

string Car::getMake() {
	return make;
}

string Car::getModel() {
	return model;
}
string Car::getColor() {
	return color; 
}

int Car::getYear() {
	return year;
}

int Car::getMPG() {
	return MPG;
}

string Car::toString() {
	return " Make: " + make + " Model: " + model + " Color: " + color + " Year: " + to_string(year) + " MPG: " + to_string(MPG);
}



vector<Car*> makeVector(int number) {
	vector<Car*> cars; 
	for (int i = 0; i < number; ++i) {
		cars.push_back(new Car());
	}
	return cars;
}

void paintVector(vector<Car*> cars, string newColor) {
	for (Car* car : cars) {
		car->setColor(newColor);
	}
}