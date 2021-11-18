#include <iostream>
#include "inheritance.h"
using namespace std;

/// Base class Methods 
//// Person constructor
Person::Person(string name, int age, char gender, int yearOfBirth) {
    this->name = name;
    this->age = age;
    this->gender = gender;
    this->yearOfBirth = yearOfBirth;
}
//// Person methods
void Person::displayPersonDetails() {
    cout << "Name : " << this->name << endl;
    cout << "Age : " << this->age << endl;
    cout << "Gender : " << this->gender << endl;
    cout << "YOB : " << this->yearOfBirth << endl;
}

//// derived class constructor and methods
Student::Student(string name, int age, char gender, int yearOfBirth, int id, string branch): Person(name, age, gender, yearOfBirth), id(id), branch(branch) { }

void Student::displayStudentDetails() {
    displayPersonDetails();
    cout << "ID : " << this->id << endl;
    cout << "Branch : " << this->branch << endl;
}