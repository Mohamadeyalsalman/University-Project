

#ifndef UNIVERSITY_PERSON_H
#define UNIVERSITY_PERSON_H

#include <iostream>
#include <string>
#include "../Helpres/Enums/Enum.h"
using namespace Enums;
using namespace std;


class Person{
    public:


        string ssn;
        Gender gender;
        string nationality;
        string fName;
        string mName;
        string lName;
        string fullName;



        Person();
        Person(string FirstName, string MiddleName, string LastName, string TheSsn, Gender theGender, string TheNationality);
        ~Person();
        string getSsn();
        void displayPersonalInformation();







};


#endif