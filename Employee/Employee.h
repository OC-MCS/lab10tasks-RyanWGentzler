#pragma once
#include <string>
using namespace std;

class Employee
{
private:
	string name, date;
	int number;
public:
	Employee(string, string, int);
	string getName();
	int getNumber();
	string getDate();
};

