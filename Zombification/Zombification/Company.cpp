#include "Company.h"

Company::Company() 
{
	employee[0] = { 0, 0, ZombificationState::Zombified };
	for (int i = 1; i < 100; i++) 
	{
		employee[i] = { i, 0, ZombificationState::Sane };
	}
	this->name = name;

}
void Company::Show() 
{
	for (int i = 0; i < 100; i++) 
	{
		string employeeState;
		switch (employee[i].state) 
		{
		case 0: 
		{
			employeeState = "Sane";
			break;
		}
		case 1:
		{
			employeeState = "Incubating";
			break;
		}
		case 2:
		{
			employeeState = "Zombified";
			break;
		}
		}
		cout << employee[i].employeeId +1 << " " << employeeState << endl;
		employee[i].HandleInfection();
	}
}