#include <iostream>
#include "Odometer.h"
#include "FuelGauge.h"
using namespace std;

int main()
{
	Odometer speed;
	FuelGauge fuel;

	for (int i = 0; i < 15; i++)
	{
		fuel.addFuel();
	}
	bool gas = true;

	while (gas)
	{
		speed.addMiles(fuel);
		cout << speed.getMiles() << " miles.\n";
		cout << fuel.getFuel() << " gallons.\n\n";
		if (fuel.getFuel() == 0)
		{
			gas = false;
		}
	}

	return 0;
}