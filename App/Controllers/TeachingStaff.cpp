//
// Created by mohamad on 23/12/23.
//
#include "TeachingStaff.h"

TeachingStaff::TeachingStaff(EmployeesAffairsD CTheEmployee, teachingStaffEmployee CteachingStaffEmployee) :
        TheEmployee(CTheEmployee), teachingStaffE(CteachingStaffEmployee){
    numberOfTeachingStaffEmployee++;


}

TeachingStaff::TeachingStaff() {
}

TeachingStaff::~TeachingStaff() {

}

void TeachingStaff::DisplayInformationOfEmployee() {
    TheEmployee.displayPersonalInformation();
    cout << "The ID: " << creatEmployeeID() << endl;
    cout << "type of Employment: " <<teachingStaffE<<endl;
    cout << teachingStaffE<<endl;

}
