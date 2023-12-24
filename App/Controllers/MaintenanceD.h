#ifndef UNIVERSITY_MAINTENANCED_H
#define UNIVERSITY_MAINTENANCED_H

#include <iostream>
#include <string>
#include "../Helpres/Enums/Enum.h"
using namespace Enums;
using namespace std;

class MaintenanceD {
protected:
    int static hallCount;
    int hallNumber;
    string college;
    Effectiveness effectiveness = Active;

    void static hallDisplyNumber();
    void setEffectivenees(Effectiveness newStatus);
    void hallDisplyInfomation();

public:
    MaintenanceD(int cHallNumber, string cCollege, Effectiveness eFfectiveness);
    ~MaintenanceD();
};

#endif // UNIVERSITY_MAINTENANCED_H
