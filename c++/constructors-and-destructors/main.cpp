#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

int main() {

    /// Creating a Student Object using the default constructor
    Student s;
    s.printInfo();
    
    /// Creating a Student Object using the one parameter constructor
    Student s1("Afroz");
    s1.printInfo();

    /// Creating a Student Object using the two parameter constructor
    Student s2("Afroz", 1);
    s2.printInfo();

    /// Creating a Student Object using the four parameter constructor
    int arr[] {80, 85, 90};
    Student s3("Afroz", 1, arr, 3);
    s3.printInfo();

    /// when main function is done then the objects s, s1, s2, s3 go out of scope and destructor is called 
    /// there are four objects so destructor is called four times.

 return 0;
}