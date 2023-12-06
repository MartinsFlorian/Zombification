#pragma once
#include <cstdlib>
using namespace std;


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
	Employee(void);
	Employee(int employeeId, int nbrDayInfection, ZombificationState state);


	//Functions
	bool ChecklsZombified();
	void HandleInfection();
	void SetNewZombificationState();
};

