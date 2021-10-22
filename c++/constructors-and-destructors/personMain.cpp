#include <iostream>
#include "Person.h"
using namespace std;

int main() {

    /// creating objects using different constructors
    Person p;
    Person p2(1);
    Person p3("Afroz");
    Person p4(2, "Ahmed");

    /// printing the info assigned by constructors
    p.printInfo();
    p2.printInfo();
    p3.printInfo();
    p4.printInfo();

}