#include <iostream>
#include "Ship.h"
using namespace std;

Ship::Ship()
{
	name = "";
	year = "0";
}

string Ship::getName()
{
	return name;
}

string Ship::getYear()
{
	return year;
}

void Ship::setName(string name)
{
	this->name = name;
}

void Ship::setYear(string year)
{
	this->year = year;
}

void Ship::print()
{
	cout << name << " " << year;
}