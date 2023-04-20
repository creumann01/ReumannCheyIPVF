#pragma once
#include<string>
using namespace std;
class Vehicle
{
protected:
	string mnftr;
	int year;
public:
	Vehicle();
	Vehicle(string m, int y);

	void setMan(string m);
	string getMan();

	void setYear(int y);
	int getYear();

	void displayInfo();
};
