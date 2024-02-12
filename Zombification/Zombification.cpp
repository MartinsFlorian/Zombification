#include "Employee.h"
#include "Company.h"
#include "Zombification.h"


int main()
{
    unique_ptr<Zombification> zombie = make_unique<Zombification>();
    zombie->RunDiagnostic();
}
    

