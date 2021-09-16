#include <iostream>
#include "Student.h"
using namespace std;

int main() {

    /// Creating a Student Object 
    Student s1("Afroz", "CR123", "CS", "CSE", 'A');
    
    /// display student details using display function
    s1.displayStudentDetails();


    /// But we cannot access the private attributes or methods in the class
    
    /// s1.name  // error because it is a private attribute

 return 0;
}