#include <iostream>
#include <string>
using namespace std;

/// It is not a good practice to write class declarations and class implementations the main code in one file
/// i am doing this in one file because it can reduce the files in directory :P and beginner friendly
class Student {

    int id;
    string name;

public:
    /// constructor with default parameters
    /// This can helpful when you are creating a object with multiple parameters and you don't want to write a seperate constructor to take care of each and every parameter
    Student(int idVal = 0, string nameVal = "NULL") :id{idVal}, name{nameVal} {}

    void printInfo() {
        cout << "------------------- Student Info ---------------------- " << endl;
        cout << "ID :  " << id << endl;
        cout << "NAME :  " << name << endl;
        cout << endl; 
    }

};

int main() {

    /// creating object with different parameters
    Student s;
    Student s2(1);
    Student s3(2, "Mark");

    /// you can't do this 
    /// Student s4("Afroz"), then this string will be passed to first parameter in the constructor which is integer and you will get error 


    /// Print Object info
    s.printInfo();
    s2.printInfo();
    s3.printInfo();

 return 0;
}