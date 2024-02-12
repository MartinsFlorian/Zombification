#include "Employee.h"



Employee::Employee() 
{

}
Employee::Employee(int employeeId, int nbrDayInfection, ZombificationState state)
{
	this->employeeId = employeeId;
	this->nbrDayInfection = nbrDayInfection;
	this->state = state;
}

bool Employee::ChecklsZombified()
{
	return state == Zombified;
}

void Employee::HandleInfection()
{
	if (state == Sane)
	{
		int rng;
		bool isZombie;
		int nbrZombie = 0;
		rng = rand() % 101;
		for (int i = 0 ; i < 100; i++) 
		{
			//isZombie = Zombification::company.employee[i].ChecklsZombified();

			//if (isZombie) 
			//{
				//nbrZombie += 1;
			//}
		}
		
		if (rng <= 5)
		{
			SetNewZombificationState();
		}
	}
	else if (state == Incubating) 
	{
		nbrDayInfection += 1;
		if (nbrDayInfection == 2)
		{
			SetNewZombificationState();
		}
	}
}

void Employee::SetNewZombificationState()
{
	if (state == Sane)
	{
		state = Incubating;
	}
	else
	{
		state = Zombified;
	}
}

