#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

int main() {

    Student s(1, "Afroz");
    s.printStudentInfo();

    /// chaining the function calls as the setId and setName return the reference of current calling object
    s.setId(2).setName("Ahmed").printStudentInfo();
 
 return 0;
}