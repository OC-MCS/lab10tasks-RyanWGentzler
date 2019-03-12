#pragma once
#include "Employee.h"
#include <string>

class ProductionWorker : public Employee
{
private:
	int shift;
	double pay;
public:
	ProductionWorker(string, string, int, int, double);
	void setShift(int);
	int getShift();
	void setPay(double);
	double getPay();
};

