#include "ProductionWorker.h"
#include "Employee.h"
using namespace std;


ProductionWorker::ProductionWorker(string name, string date, int number, int shift, double pay) : Employee(name, date, number)
{
	this->shift = shift;
	this->pay = pay;
}

void ProductionWorker::setShift(int shift)
{
	this->shift = shift;
}

int ProductionWorker::getShift()
{
	return shift;
}

void ProductionWorker::setPay(double pay)
{
	this->pay = pay;
}

double ProductionWorker::getPay()
{
	return pay;
}