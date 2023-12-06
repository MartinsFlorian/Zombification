#include <iostream>
#include <conio.h>
#include "Employee.h"
#include "Company.h"
#include "Zombification.h"
using namespace std;

int main()
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

