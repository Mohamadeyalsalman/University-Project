//
// Created by mohamad on 21/12/23.
//
#include "Person.h"
#include "MaintenanceD.h"
#include "EmployeesAffairsD.h"
#ifndef UNIVERSITY_ADMISSIONANDREGISTRATIOND_H
#define UNIVERSITY_ADMISSIONANDREGISTRATIOND_H


class AdmissionAndRegistrationD : protected Person, protected MaintenanceD, protected EmployeesAffairsD{




};


#endif //UNIVERSITY_ADMISSIONANDREGISTRATIOND_H
