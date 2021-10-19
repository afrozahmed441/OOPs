#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

/// default Constructor with no parameters 
Student::Student() {
    studentName = "NULL";
    id = 0;
    marks = NULL;
    size = 0;
}

/// Constructor with one parameter (name of the student) 
Student::Student(string name) {
    studentName = name;
    id = 0;
    marks = NULL;
    size = 0;
}

/// Constructor with two parameters (name and id) 
Student::Student(string name, int roll) {
    studentName = name;
    id = roll;
    marks = NULL;
    size = 0;
}

/// Constructor with four parameters (name and id and no.of subjects and marks)
Student::Student(string name, int roll, int *arr, int n) {
    studentName = name;
    id = roll;
    size = n;
    marks = new int[n];
    setMarks(marks, arr, n);
}

/// method printInfo
void Student::printInfo() {
    cout << "--------------------------- Student Information ---------------------------- " << endl;
    cout << "Student Name : " << studentName << endl;
    cout << "Student Id : " << id << endl;
    cout << "Student Marks : ";
    for(int i = 0; i < size; i++) cout << marks[i] << " ";
    cout << endl;
}

/// method setMarks
void Student::setMarks(int *marks, int *arr, int n) {
    for(int i = 0; i < n; i++) marks[i] = arr[i];
}

/// destructor
/// Compiler generates a default destructor, that is enough in many cases
/// We need to define our own destructor when we have raw pointers as data members in the class, so that we can deallocate the space assigned to them and make sure there is no memory leak
Student::~Student() {
    cout << "---- Destructor ---- " << endl;
    delete(marks);
}