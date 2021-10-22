#ifndef _PERSON_
#define _PERSON_

#include <string>
using std::string;

/// This class is used to show how constructor delegation works with initializer list and overloading constructors  

class Person {

    int id;
    string name;

public:
    Person();
    Person(int);
    Person(string);
    Person(int, string);
    void printInfo();

};

#endif