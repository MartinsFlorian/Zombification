#pragma once
#include "Employee.h"
#include <string>
#include <iostream>
using namespace std;

class Company
{
private:
	string name;


public:
	Employee employee[100];

	Company();
	void Show();
};

