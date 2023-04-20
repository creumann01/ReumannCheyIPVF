#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle()
{
	mnftr = "";
	year = 0;
}

Vehicle::Vehicle(string m, int y)
{
	mnftr = m;
	year = y;
}

void Vehicle::setMan(string m)
{
	mnftr = m;
}
string Vehicle::getMan()
{
	return mnftr;
}

void Vehicle::setYear(int y)
{
	year = y;
}
int Vehicle::getYear()
{
	return year;
}

void Vehicle::displayInfo()
{
	cout << "Vehicle Information: " << endl
		<< "Manufacturer: " << mnftr << endl
		<< "Year Built: " << year << endl;
}