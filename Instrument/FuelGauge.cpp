#include "FuelGauge.h"
using namespace std;

FuelGauge::FuelGauge()
{
	fuel = 0;
}

int FuelGauge::getFuel()
{
	return fuel;
}

void FuelGauge::addFuel()
{
	if (fuel < 15)
	{
		fuel++;
	}
}

bool FuelGauge::burnFuel()
{
	bool result = true;
	if (fuel > 0)
	{
		fuel--;
	}
	else
	{
		result = false;
	}
	return result;
}