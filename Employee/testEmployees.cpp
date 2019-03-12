#include <iostream>
#include <string>
#include "ProductionWorker.h"
using namespace std;

int main()
{
	ProductionWorker jim("Jim", "1/01/01", 8675309, 1, 10.50);
	int iinput;

	cout << "Employee #" << jim.getNumber() << "'s name is " << jim.getName()
		<< ", his hire date was " << jim.getDate() << ", he works shift " << jim.getShift()
		<< ", and he gets paid $" << jim.getPay() << " an hour.\n\n"
		<< "What shift does " << jim.getName() << " want to change to?\n";

	cin >> iinput;
	jim.setShift(iinput);
	cout << endl << "Employee #" << jim.getNumber() << "'s name is " << jim.getName()
		<< ", his hire date was " << jim.getDate() << ", he works shift " << jim.getShift()
		<< ", and he gets paid $" << jim.getPay() << " an hour.\n\n"
		<< "What shift does " << jim.getName() << " want to change to?\n";

	
	return 0;
}