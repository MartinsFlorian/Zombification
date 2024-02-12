#pragma once

#include "Company.h"
#include "GlobalHeader.h"

Company company;

class Zombification 
{
public:
	void RunDiagnostic() 
	{
        srand(time(NULL));
        int day = 1;
        string input;

        while (day <= 28)
        {
            cout << "Day :" << day << endl;
            company.Show();
            input = _getch();
            day += 1;
            system("cls");
        }
    }
	
};