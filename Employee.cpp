//
// Created by Noah Smith on 10/18/22.
//
#include <string>

#include "Employee.hpp"

using namespace std;

Employee::Employee(string fName, string lName, int age) : fName(fName), lName(lName), age(age){

}

string Employee::getFullName() {
    return fName + " " + lName;
}

string Employee::getFirstName() {
    return fName;
}

string Employee::getLastName() {
    return lName;
}

int Employee::getAge() {
    return age;
}

void Employee::setFirstName(string fName) {
    this->fName = fName;
}

void Employee::setLastName(string lName) {
    this->lName = lName;
}

void Employee::setAge(int age) {
    this->age = age;
}