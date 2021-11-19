#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

/// Constructor
Student::Student(int id, string name, string branch, char section): id(id), name(name), branch(branch), section(section) { }

/// friend function 
const void displayInfo(const Student &source) {
    /// friend function can access private data members of the class
    cout << "ID : " << source.id << endl;
    cout << "Name : " << source.name << endl;
    cout << "Branch : " << source.branch << endl;
    cout << "Section : " << source.section << endl;
    cout << endl;
}