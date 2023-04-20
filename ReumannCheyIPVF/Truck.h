#pragma once
#include<string>
#include "Vehicle.h"
using namespace std;

class Truck : public Vehicle
{
private:
	int towCap;
public:
	Truck();
	Truck(string m, int y, int tc);

	void setTC(int t);
	int getTC();

	void displayInfo();
};