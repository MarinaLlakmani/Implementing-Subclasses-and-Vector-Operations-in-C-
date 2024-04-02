// 3_Takehome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Car.h"
#include "Coupe.h"
#include "Sedan.h"
#include "SUV.h"
#include "Truck.h"

using namespace std;

int main()
{
    vector<Car*> myCars = makeVector(3);
    Car c = Car("Honda", "Civic", "Dirty", 1998, 28);
    myCars[0] = &c;
    
    myCars[1] = new Coupe("Mazda", "Miata", "Green", 2005, 27, 6);
    myCars[2] = new Sedan("Ford", "Focus", "Blue", 2013, 36, 14);

    myCars.push_back(new SUV("Jeep", "Cherokee", "Black", 1985, 12, 6));
	
    Truck t = Truck("Chevrolet", "Silverado", "White", 2002, 14, 150);
    myCars.push_back(&t);
	
	paintVector(myCars, "Red");
    for (Car* c : myCars) {
        cout << c->toString() << endl << endl;
    }
}
