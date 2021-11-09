#include <iostream>
#include "Student.h"
using namespace std;

/// This keyword is useful when the local variables have same names as the data members of a class
/// This pointer can be used to differ the local variables and the data members of same names
Student::Student(int id, string name) {
    this->id = id;
    this->name = name;
}

/// Also This pointer can be used to return the reference of the current calling object
/// so that the reference can be used to chain the function calls on the same line. (check in main.cpp file)
Student &Student::setId(int id) { this->id = id; return *this; }
Student &Student::setName(string name) { this->name = name; return *this; }

void Student::printStudentInfo() {
    cout << "ID: " << this->id << endl;
    cout << "Name : " << this->name << endl;
}