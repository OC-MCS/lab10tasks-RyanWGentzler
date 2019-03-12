#pragma once
class FuelGauge
{
private:
	int fuel;
public:
	FuelGauge();
	int getFuel();
	void addFuel();
	bool burnFuel();
};

