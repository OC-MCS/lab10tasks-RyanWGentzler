#include <iostream>
#include <string>
#include "CargoShip.h"
#include "CruiseShip.h"
using namespace std;

int main()
{
	Ship* ptr[3] =
	{
		new Ship("Name", "1492"),
		new CargoShip("EsCargo", "8675309", 10000),
		new CruiseShip("We Cruisin'", "2941", 1000)
	};

	for (int i = 0; i < 3; i++)
	{
		ptr[i]->print();
		cout << endl;
	}

	return 0;
}