// في ملف Enum.h

#ifndef ENUM_H
#define ENUM_H
#include <iostream>
#include "string"
using namespace std;
#include <map>

namespace Enums {

    enum Gender {
        Male = 0,
        Female = 1,
    };

    enum Effectiveness {
        Active = 1,
        NotActive = 0,
    };

    enum Departments{

        AffairsEmployeeDepartments = 0,
        AcceptAndRegistrationDepartments = 1,
        FinanceDepartments = 2,
        MaintenanceDepartments = 3,
        libraryDepartments = 4,
    };

    enum teachingStaffEmployee{
        Professor = 0,
        AssociateProfessor = 1,
        AssistantProfessor = 2,
        Instructor = 3,
        VisitingProfessor = 4,
        Researcher = 5,

    };

    enum EmployeeType{
        teachingStaff = 0,
        EmployeeInDepartment = 1,
        AdministrativeEmployee = 2,


    };

}

#endif // ENUM_H
