#include <iostream>
#include "App/Controllers/MaintenanceD.h"
#include "App/Controllers/Person.h"
#include "App/Controllers/EmployeesAffairsD.h"
#include "App/Controllers/DepartmentEmployee.h"
#include "App/Controllers/TeachingStaff.h"




int main() {
    Person mo("mohammad", "ibrahim", "eyal salman","2000550320", Male, "jordinian");
    EmployeesAffairsD moo(mo);
    DepartmentEmployee mooo(moo, AffairsEmployeeDepartments);
    cout <<"##########################################################################"<<endl;
    EmployeesAffairsD::getNumberOfAllEmployee();
    EmployeesAffairsD::getNumberOfDepartmentEmployee();
    mooo.DisplayInformationOfEmployee();
    cout <<"##########################################################################"<<endl;


    Person ko("jad", "michel", "kfc", "3000550303", Male, "amirican");
    EmployeesAffairsD koo(ko);
    TeachingStaff kooo(koo, Professor);
    kooo.DisplayInformationOfEmployee();

    cout <<"##########################################################################"<<endl;
    Person fo("ahmad", "ibrahim", "mac", "2000550320", Male, "african");
    EmployeesAffairsD foo(fo);
    DepartmentEmployee fooo(foo, AcceptAndRegistrationDepartments);
    cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
    EmployeesAffairsD::getNumberOfAllEmployee();
    EmployeesAffairsD::getNumberOfDepartmentEmployee();
    cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
    fooo.DisplayInformationOfEmployee();







    return 0;
}

