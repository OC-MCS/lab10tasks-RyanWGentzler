#pragma once
#include "Employee.h"

class ShiftSupervisor : public Employee
{
private:
	int salary;
	int bonus;
public:
	ShiftSupervisor(string, string, int, int, int);
	void setSalary(int);
	int getSalary();
	void setBonus(int);
	int getBonus();
};
