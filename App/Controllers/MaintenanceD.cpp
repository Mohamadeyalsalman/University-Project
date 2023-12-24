//
// Created by mohamad on 21/12/23.
//

#include "MaintenanceD.h"

#include <iostream>
#include "string"
using namespace std;
int MaintenanceD::hallCount = 0;



MaintenanceD::MaintenanceD(int cHallNumber, string cCollege, Effectiveness cFfectiveness):
hallNumber(cHallNumber), college(cCollege), effectiveness(cFfectiveness){

    cout << hallNumber << " " << college <<" new hall " << endl;
    hallCount++ ;
}

void MaintenanceD::hallDisplyNumber() {

    cout << hallCount << endl;
}

MaintenanceD::~MaintenanceD() {
    hallCount-- ;

}

void MaintenanceD::setEffectivenees(Effectiveness newStatus) {
    effectiveness = newStatus;

}

void MaintenanceD::hallDisplyInfomation() {

    if  (effectiveness == Effectiveness::Active){
        cout << hallNumber << " " << college << " active" << endl;
    }
    else{
        cout << hallNumber << " " << college << " not active" << endl;
    }

}

