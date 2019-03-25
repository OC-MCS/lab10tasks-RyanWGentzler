#include <iostream>
#include "CargoShip.h"
using namespace std;

CargoShip::CargoShip(string name, string year, int cap) : Ship(name, year)
{
	this->cap = cap;
}

int CargoShip::getCap()
{
	return cap;
}

void CargoShip::setCap(int cap)
{
	this->cap = cap;
}

void CargoShip::print()
{
	cout << getName() << " " << getYear() << " " << cap;
}