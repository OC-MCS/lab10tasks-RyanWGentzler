#include "ShiftSupervisor.h"
#include "Employee.h"
using namespace std;

ShiftSupervisor::ShiftSupervisor(string name, string date, int number, int salary, int bonus) : Employee(name, date, number)
{
	this->salary = salary;
	this->bonus = bonus;
}

void ShiftSupervisor::setSalary(int salary)
{
	this->salary = salary;
}

int ShiftSupervisor::getSalary()
{
	return salary;
}

void ShiftSupervisor::setBonus(int bonus)
{
	this->bonus = bonus;
}

int ShiftSupervisor::getBonus()
{
	return bonus;
}