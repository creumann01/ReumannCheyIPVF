#include<iostream>
#include<string>
#include"Vehicle.h"
#include "Car.h"

using namespace std;

Car::Car()
{
	numOfDoors = 0;
}

Car::Car(string m, int y, int nOD) : Vehicle(m, y)
{
	numOfDoors = nOD;
}

void Car::setNOD(int n)
{
	numOfDoors = n;
}
int Car::getNOD()
{
	return numOfDoors;
}

void Car::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Number of Doors: " << numOfDoors << endl;
}

