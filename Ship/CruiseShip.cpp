#include <iostream>
#include "CruiseShip.h"
using namespace std;

CruiseShip::CruiseShip(string name, string year, int max) : Ship(name, year)
{
	this->max = max;
}

int CruiseShip::getMax()
{
	return max;
}

void CruiseShip::setMax(int max)
{
	this->max = max;
}

void CruiseShip::print()
{
	cout << getName() << " " << getYear() << " " << max;
}