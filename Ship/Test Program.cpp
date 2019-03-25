#include <iostream>
#include <string>
#include "CargoShip.h"
#include "CruiseShip.h"
using namespace std;

int main()
{
	CargoShip a("Name", "1492", 9001);
	CruiseShip b("Also Name", "2941", 1009);

	a.print();
	cout << endl;
	b.print();

	return 0;
}