#ifndef _STUDENT_
#define _STUDENT_

#include <string>
using std::string;

class Student {

    /// private data members of Student
    int id;
    string name;
    string branch;
    char section;

    //// friend concept 
    /// A friend function can be global function or a Class Method
    /// A friend can also be another class 
    /// A friend class or class method or a non-member function has access to the private data members and methods of a class
    /// A friend method or function is defined as a prototype with friend keyword at start
    /// FriendShip is not inheritaed 
    friend const void displayInfo(const Student &);
    /*
    
    Declaring another class method as friend function 
    Syntax : 
          friend return_type className::methodName()
    Example:
          friend void Other::displayInfo(const Student &)

    Declaring another class as a friend class 
    Syntax: 
            firend class ClassName
    Example:
            friend class OtherClass

    */

public:

    Student(int id, string name, string branch, char section);


};

#endif