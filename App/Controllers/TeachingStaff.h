//
// Created by mohamad on 23/12/23.
//

#ifndef UNIVERSITY_TEACHINGSTAFF_H
#define UNIVERSITY_TEACHINGSTAFF_H
#include "EmployeesAffairsD.h"
#include "../Helpres/Enums/Enum.h"
using namespace Enums;
using namespace std;

class TeachingStaff : protected EmployeesAffairsD{
    protected:

        EmployeesAffairsD TheEmployee;
        string ADepartmentEmployee = "Employee Teaching Staff";
        teachingStaffEmployee teachingStaffE;

    public:
        TeachingStaff(EmployeesAffairsD CTheEmployee, teachingStaffEmployee CteachingStaffEmployee);
        TeachingStaff();
        ~TeachingStaff();
        void DisplayInformationOfEmployee();



};


#endif //UNIVERSITY_TEACHINGSTAFF_H
