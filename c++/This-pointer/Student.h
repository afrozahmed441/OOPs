#ifndef _STUDENT_
#define _STUDENT_

#include <string>
using std::string;

/// This keyword 
class Student{

    int id;
    string name;
    /// This keyword is a pointer in c++ whcih is used to point to the current object
    /// This keyword is only accessible inside a non-static member function of a class
    /// This keyword is not needed in the static member funcions, as static member functions can be accessed by class name and scope resolution operator
    /// This pointer can't be modified as it is a r-value.
public:
    Student(int id, string name);
    Student &setId(int id);
    Student &setName(string name);
    void printStudentInfo();

};

#endif