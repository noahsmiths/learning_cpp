//
// Created by Noah Smith on 10/18/22.
//
#include <string>

#ifndef LEARNING_CPP_EMPLOYEE_H
#define LEARNING_CPP_EMPLOYEE_H

using namespace std;

class Employee {
private:
    string fName;
    string lName;
    int age;
public:
    Employee(string, string, int);

    string getFullName();
    string getFirstName();
    string getLastName();
    int getAge();

    void setFirstName(string);
    void setLastName(string);
    void setAge(int);
};


#endif //LEARNING_CPP_EMPLOYEE_H
