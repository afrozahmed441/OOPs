#ifndef _INHERITANCE_
#define _INHERITANCE_

#include <string>
using std::string;

//// inheritance 
//// inheritance is a mechanism which provides a way of creating a new class based on the existing class or classes
//// inheritance supports the reusability of the code

//// The class which is used in deriving new class is called base class, parent class, super class
/// The class which is derived from base class is called derived class, child class, sub class

/// There are different modes of inheriting the base class in c++
/**
 * Modes of inheritance in c++
 * 
 * Public inheritance : The data members which are public in the base class will be public in the derived class, 
 *                    : The data members which are protected in the base class will be protected in the derived class, 
 *                    : The data members which are private in the base class will be private in the derived class.
 * 
 * Protected inheritance : The data members which are public in the base class will be protected in the derived class, 
 *                       : The data members which are protected in the base class will be protected in the derived class, 
 *                       : The data members which are privated in the base class will be private in the derived class. 
 * 
 * Private inheritance : The data members which are public in the base class will be private in the derived class,
 *                     : The data members which are protected in the base class will be private in the derived class,
 *                     : The data members which are private in the base class will be private in the derived class.
**/

//// Types of inheritance 
//// Single inheritance 
//// A class is allowed to inherit from only one class.

//// Multiple inheritance 
//// A class is allowed to inherit from two or more classes.
//// c++ supports multiple inheritance 

//// MultiLevel inheritance 
//// A class is derived is created from another derived class 

//// in this example we will look at single inheritance 

/// Base class
class Person {

        string name;
        int age;
        char gender;
        int yearOfBirth; 

public:
        Person(string name, int age, char gender, int yearOfBirth);
        void displayPersonDetails();
};


/// Derived class
/// public inheritance 
class Student: public Person {

    int id;
    string branch;

public:
    Student(string name, int age, char gender, int yearOfBirth, int id, string branch);
    void displayStudentDetails();

};


#endif