#ifndef _STUDENT_H_
#define _STUDENT_H_

#include <iostream>
#include <string>
using namespace std;

class Student {

/// Access Modifiers or Access Specifiers are keyword used in OOP to set the 
/// accessibility of the methods and attributes.

/// Public Access Specifier 
/// The code in the block of the public Access Specifier is accessiblie outside the class

/// Private Access Specifier 
/// The code in the block of the Private Access Specifier is accessiblie only inside the class
/// The methods that are inside the class can only access the private methods or private attributes


/// There is another Access Specifier Protected (will see this in inheritan section)

/// By default if we don't specify any access modifier or specifier the methods and
/// attributes are private 

string name;
string roll;
string deparment;
string branch;
char sec;

/// All the attributes or data members above are private means these are only accessible by class methods

public:
/// All the methods inside this are public means that they are accessible by functions outside the class
    Student(string stuName, string stuRoll, string stuDeparment, string stuBranch, char stuSection){

        name = stuName;
        roll = stuRoll;
        deparment = stuDeparment;
        branch = stuBranch;
        sec = stuSection;

    }

    /// This method displays student Details and it is public method means it can be accessible from outside the classs
    void displayStudentDetails(){
        cout << "Name : " << name << endl;
        cout << "Roll : " << roll << endl;
        cout << "Deparment : " << deparment << endl;
        cout << "Branch : " << branch << endl;
        cout << "Section : " << sec << endl;
        cout << endl;
    }

};

#endif