#include <iostream>
#include <string>
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
using namespace std;

int main()
{
	ProductionWorker jim("Jim", "1/01/01", 8675309, 1, 10.50);
	ShiftSupervisor frank("Frank", "9/11/01", 9035768, 10000, 1000);
	int iinput;

	cout << "Employee #" << frank.getNumber() << "'s name is " << frank.getName()
		<< ", his hire date was " << frank.getDate() << ", his salary is $" << frank.getSalary()
		<< " and the bonus he recieves is $" << frank.getBonus() << " assuming his people get work done.\n";
	cout << "Employee #" << jim.getNumber() << "'s name is " << jim.getName()
		<< ", his hire date was " << jim.getDate() << ", he works shift " << jim.getShift()
		<< ", and he gets paid $" << jim.getPay() << " an hour.\n\n"
		<< "What shift does " << jim.getName() << " want to change to?\n";

	cin >> iinput;
	jim.setShift(iinput);
	cout << endl << "Employee #" << jim.getNumber() << "'s name is " << jim.getName()
		<< ", his hire date was " << jim.getDate() << ", he works shift " << jim.getShift()
		<< ", and he gets paid $" << jim.getPay() << " an hour.\n\n";
	
	return 0;
}