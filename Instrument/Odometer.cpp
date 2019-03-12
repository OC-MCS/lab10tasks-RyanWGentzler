#include "Odometer.h" 
using namespace std;

Odometer::Odometer()
{
	miles = 0;
}

int Odometer::getMiles()
{
	return miles;
}

void Odometer::addMiles(FuelGauge& fuel)
{
	miles++;
	if (miles > 999999)
	{
		miles = 0;
	}
	if (miles % 24 == 0)
	{
		fuel.burnFuel();
	}

}