#pragma once
#include "Employee.h"
#include "GlobalHeader.h"


class Company
{
private:
	string name;


public:
	Employee employee[100];

	Company();
	void Show();
};

