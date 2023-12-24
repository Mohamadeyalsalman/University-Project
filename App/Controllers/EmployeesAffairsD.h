//
// Created by mohamad on 21/12/23.
//

#ifndef UNIVERSITY_EMPLOYEESAFFAIRSD_H
#define UNIVERSITY_EMPLOYEESAFFAIRSD_H
#include "Person.h"
#include "MaintenanceD.h"
#include "EmployeesAffairsD.h"
#include "Person.h"

#include <iostream>
#include <string>
#include "../Helpres/Enums/Enum.h"
using namespace Enums;
using namespace std;

class EmployeesAffairsD : public Person{
    protected:
        int static numberOfAllEmployee;
        int static numberOfDepartmentEmployee;
        int static numberOfTeachingStaffEmployee;
        string emailOfEmployee;
        string passwordOfEmployee;
        string EmployeeID;
        Person person;
        Effectiveness StatusOfEmployee = Active;


public:
        void displayPersonalInformation();
        EmployeesAffairsD(Person ThePerson);
        EmployeesAffairsD();
        ~EmployeesAffairsD();
        static int returnNumberOfEmployee();
        static void getNumberOfAllEmployee();
        static void getNumberOfDepartmentEmployee();
        static void getNumberOfTeachingStaffEmployee();
        string getNumberOfSsn();
        string creatEmployeeID();
        string createPassword();
        string createEmail();
        string getPassword();






};



#endif //UNIVERSITY_EMPLOYEESAFFAIRSD_H
