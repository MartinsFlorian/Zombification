#pragma once
#include "GlobalHeader.h"



enum ZombificationState
{
	Sane,
	Incubating,
	Zombified
};
class Employee
{
public:
	
	int employeeId;

	int nbrDayInfection;

	ZombificationState state;

	//Constructor
	Employee();
	Employee(int employeeId, int nbrDayInfection, ZombificationState state);


	//Functions
	bool ChecklsZombified();
	void HandleInfection();
	void SetNewZombificationState();
};

