#pragma once
#include <string>
using namespace std;

class Ship
{
private:
	string name;
	string year;
public:
	Ship();
	string getName();
	string getYear();
	void setName(string);
	void setYear(string);
	virtual void print();
};