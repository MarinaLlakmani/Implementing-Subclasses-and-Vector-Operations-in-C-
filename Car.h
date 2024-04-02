#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Car
{
protected:
	string make;
	string model;
	string color;
	int year;
	int MPG;


public :
	Car();
	~Car();
	Car(string, string, string, int, int);
	string getMake();
	string getModel();
	string getColor();
	int getYear();
	int getMPG();
	void setMake(string);
	void setModel(string);
	void setColor(string);
	void setYear(int);
	void setMPG(int);
	
	virtual string toString();

};
	
vector<Car*> makeVector(int);
void paintVector(vector<Car*>, string);
