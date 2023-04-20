#pragma once
#include<string>
#include "Vehicle.h"
using namespace std;

class Car : public Vehicle
{
private:
	int numOfDoors;
public:
	Car();
	Car(string m, int y, int nOD);

	void setNOD(int n);
	int getNOD();

	void displayInfo();
};