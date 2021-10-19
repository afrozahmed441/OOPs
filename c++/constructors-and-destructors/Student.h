#ifndef _STUDENT_
#define _STUDENT_

#include <string>
using std::string;

class Student {

    string studentName;
    int id;
    /// marks stores the marks of the student in different subjects
    /// we will dynamically allocate space for marks array (just to show you the use of destructors)
    int *marks;
    int size;

public:
    /// Constructor is a special type of function, which is called every time a object of this class is created
    /// Constructor name is same as the class name
    /// Just like functions Constructors can also be overloaded
    /// overloading of constructor is same as of overloading functions, by chainging the signature of the function (parameters and parameters type)
    Student();
    Student(string);
    Student(string, int);
    Student(string, int, int*, int);

    /// methods
    void printInfo();
    void setMarks(int *, int *, int);

    /// Destructor is also a special type of function, which is called when the object goes out of scope
    /// Destructor name is same as Class Name, but it start with ~ sign
    ~Student();

};

#endif