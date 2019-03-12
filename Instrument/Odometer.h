#pragma once
#include "FuelGauge.h"
class Odometer
{
private:
	int miles;
public:
	Odometer();
	int getMiles();
	void addMiles(FuelGauge&);
};

