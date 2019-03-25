#pragma once
#include "Ship.h"
using namespace std;

class CruiseShip : public Ship
{
private:
	int max;
public:
	CruiseShip(string, string, int);
	int getMax();
	void setMax(int);
	void print();
};