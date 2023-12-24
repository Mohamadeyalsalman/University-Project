//
// Created by mohamad on 22/12/23.
//
#include "EmployeesAffairsD.h"
#include "Person.h"
#include <iostream>
#include <string>
#include "../Helpres/Enums/Enum.h"
using namespace Enums;
using namespace std;

#ifndef UNIVERSITY_DEPARTMENTEMPLYEE_H
#define UNIVERSITY_DEPARTMENTEMPLYEE_H

class DepartmentEmployee : protected EmployeesAffairsD{
        protected:
            EmployeesAffairsD TheEmployee;
            string ADepartmentEmployee = "Employee In Department";
            Departments TheDepartment;


        public:
            DepartmentEmployee(EmployeesAffairsD CTheEmployee, Departments CTheDepartment);
            DepartmentEmployee();
            ~DepartmentEmployee();
            void DisplayInformationOfEmployee();





};


#endif //UNIVERSITY_DEPARTMENTEMPLYEE_H
