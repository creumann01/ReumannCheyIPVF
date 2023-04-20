#include<iostream>
#include<string>
#include"Vehicle.h"
#include"Truck.h"
using namespace std;

Truck::Truck()
{
	towCap = 0;
}

Truck::Truck(string m, int y, int tc) : Vehicle(m, y)
{
	towCap = tc;
}

void Truck::setTC(int t)
{
	towCap = t;
}
int Truck::getTC()
{
	return towCap;
}

void Truck::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << towCap << endl;

}