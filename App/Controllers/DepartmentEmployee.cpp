//
// Created by mohamad on 22/12/23.
//

#include "DepartmentEmployee.h"
#include <iomanip>

DepartmentEmployee::DepartmentEmployee(EmployeesAffairsD CTheEmployee, Departments CTheDepartment):
TheEmployee(CTheEmployee), TheDepartment(CTheDepartment){

    numberOfDepartmentEmployee++;

}


DepartmentEmployee::DepartmentEmployee(){}

void DepartmentEmployee::DisplayInformationOfEmployee() {
    TheEmployee.displayPersonalInformation();
    cout <<endl<< "type of Employment: " <<ADepartmentEmployee<<endl;
    cout << "Employee in: " <<TheDepartment<<endl;
    cout << TheEmployee.getNumberOfSsn() ;
    cout << TheEmployee.getPassword();




}


DepartmentEmployee::~DepartmentEmployee() {

}


