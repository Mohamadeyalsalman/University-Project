//
// Created by mohamad on 21/12/23.
//
#include <iomanip>

#include "EmployeesAffairsD.h"

int EmployeesAffairsD::numberOfDepartmentEmployee = 0;
int EmployeesAffairsD::numberOfTeachingStaffEmployee = 0;
EmployeesAffairsD::EmployeesAffairsD(Person ThePerson): person(ThePerson){
    creatEmployeeID();
    createEmail();
    createPassword();




}

EmployeesAffairsD::EmployeesAffairsD() {

}

EmployeesAffairsD::~EmployeesAffairsD() {

}

void EmployeesAffairsD::displayPersonalInformation() {
    person.displayPersonalInformation();


}

void EmployeesAffairsD::getNumberOfAllEmployee() {
    cout << numberOfDepartmentEmployee + numberOfTeachingStaffEmployee<<endl;


}

void EmployeesAffairsD::getNumberOfDepartmentEmployee() {
    cout << numberOfDepartmentEmployee << endl;

}

void EmployeesAffairsD::getNumberOfTeachingStaffEmployee() {
    cout << numberOfTeachingStaffEmployee << endl;

}


int EmployeesAffairsD::returnNumberOfEmployee() {
    return (numberOfTeachingStaffEmployee + numberOfDepartmentEmployee);

}


string EmployeesAffairsD::getNumberOfSsn() {
    return person.getSsn();
}




string EmployeesAffairsD::creatEmployeeID() {
    stringstream Id;
    Id << "1" << std::setw(7) << std::setfill('0') << returnNumberOfEmployee();
    EmployeeID = Id.str();
    return EmployeeID;

}


string EmployeesAffairsD::createPassword() {
    size_t passwordLength = 5;

    passwordOfEmployee = "stu" + person.getSsn().substr(person.ssn.length() - passwordLength, passwordLength);
    return (passwordOfEmployee);

}

string EmployeesAffairsD::createEmail() {

    emailOfEmployee = creatEmployeeID() + "@staff.ttu.edu.jo";
    return (emailOfEmployee);

}

string EmployeesAffairsD::getPassword() {

    return passwordOfEmployee;
}
