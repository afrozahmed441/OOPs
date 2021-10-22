#include <iostream>
#include "Person.h"
using namespace std;

/// default constructor with no parameters 
Person::Person() : Person{0, "NULL"} {}

/// constructor with id parameter
Person::Person(int id) : Person{id, "NULL"} {}

/// constructor with name parameter
Person::Person(string name) : Person{0, name} {}

/// constructor with both the parameters
Person::Person(int id, string name) : id{id}, name{name} {}

void Person::printInfo() {
    cout << "---------------- Person Info ------------------" << endl;
    cout << "ID : " << id << endl;
    cout << "NAME : " << name << endl;
}