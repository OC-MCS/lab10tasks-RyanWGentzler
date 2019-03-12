#include "Employee.h"

Employee::Employee(string name, string date, int number)
{
	this->name = name;
	this->number = number;
	this->date = date;
}

string Employee::getName()
{
	return name;
}

int Employee::getNumber()
{
	return number;
}

string Employee::getDate()
{
	return date;
}