#include "Person.h"

void Person::displayPersonalInformation() {
    if (gender == Gender::Male) {
        cout << "Name: " << fullName << endl;
        cout << "Ssn: " << ssn << endl;
        cout << "Gender: Male" << endl;
        cout << "Nationality: " << nationality;
    } else {
        cout << "Name: " << fullName << endl;
        cout << "Ssn: " << ssn << endl;
        cout << "Gender: Female" << endl;
        cout << "Nationality: " << nationality;
    }
}

Person::Person(string FirstName, string MiddleName, string LastName, string TheSsn, Gender theGender, string TheNationality) :
        fName(FirstName), mName(MiddleName), lName(LastName), ssn(TheSsn), gender(theGender), nationality(TheNationality) {

    fullName = fName + " " + mName + " " + lName;
}

Person::~Person() {
}

Person::Person()  {
}

string Person::getSsn() {

    return ssn;
}