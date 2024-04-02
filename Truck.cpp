#include "Truck.h"
#include <string>
using namespace std;

Truck::Truck() : Car() {
    make = "invalid";
    model = "jeep";
    color = "black";
    year = 2000;
    MPG = 0;
    bedCapacity = 0;
}

Truck::Truck(string make, string model, string color, int year, int MPG, int bedCapacity) {
    this->make = make;
    this->model = model;
    this->color = color;
    this->year = year;
    this->MPG = MPG;
    this->bedCapacity = bedCapacity;
}


string Truck :: toString()
{
    string carInfo = Car::toString();
    carInfo += " Bed Capacity: " + to_string(bedCapacity);
    return carInfo;
}
