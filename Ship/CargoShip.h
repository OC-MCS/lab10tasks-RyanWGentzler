#pragma once
#include "Ship.h"

class CargoShip : public Ship
{
private:
	int cap;
public:
	CargoShip(string, string, int);
	int getCap();
	void setCap(int);
	void print();
};