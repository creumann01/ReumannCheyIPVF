//Chey Reumann
//CIS 1202.M01
//April 18, 2023

#include<iostream>
#include<string>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

void vehicleInfo(Vehicle);
void carInfo(Car);
void truckInfo(Truck);

int main()
{
	string m;
	int y, nOD, tc;
	

	cout << "Vehicle: " << endl
		<< "Enter Manufacturer: ";
	getline(cin, m);
	cout << "Enter Year: ";
	cin >> y;
	Vehicle v1(m, y);
	v1.displayInfo();

	cout << "Car: " << endl
		<< "Enter Manufacturer: ";
	cin.ignore();
	getline(cin, m);
	cout << "Enter Year: ";
	cin >> y;
	cout << "Enter Number of Doors: ";
	cin >> nOD;
	Car c1(m, y, nOD);
	c1.displayInfo();

	cout<< "Truck: " << endl
		<< "Enter Manufacturer: ";
	cin.ignore();
	getline(cin, m);
	cout << "Enter Year: ";
	cin >> y;
	cout << "Enter Tow Capacity: ";
	cin >> tc;
	Truck t1(m, y, tc);
	t1.displayInfo();
}