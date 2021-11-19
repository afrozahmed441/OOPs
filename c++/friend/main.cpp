#include <iostream>
#include "Student.h"
using namespace std;

int main() {

    Student s(1, "Afroz", "CSE", 'A');
    Student s2(2, "John", "ECE", 'A');
    Student s3(3, "Mark", "CSE", 'B');
    Student s4(4, "Josh", "MECH", 'A');

    displayInfo(s);
    displayInfo(s2);
    displayInfo(s3);
    displayInfo(s4);


 return 0;
}