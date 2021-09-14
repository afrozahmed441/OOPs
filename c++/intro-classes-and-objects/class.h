#ifndef _USER_H_
#define _USER_H_

#include <iostream>
#include <string>
using namespace std;

/// we declare a class with class keyword followed by class Name
class User{

    /// These are called attributes
    /// or Data members of the class
    /// and the functions in the class are called methods or member functions
    string userName;
    int age;
    char gender;
    string info;


/// access modifier
/// more on the access modifier later (in access-modifier section)
/// For now just you can assume that code inside this is public 
public:
    /// This is a special type of member function
    /// It is called constructor
    /// constructor is invoked or called when a object is created 
    /// It is useful to initalize the object properties when a object is created.
    User(string name, int userAge, char userGender, string userInfo) {

        userName = name;
        age = userAge;
        gender = userGender;
        info = userInfo;

    }
    
    /// display user details
    void display() {
        cout << "Name: " << this->userName << endl;
        cout << "Age: " << this->age << endl;
        cout << "Gender: " << this->gender << endl;
        cout << "Info: "  << this->info << endl;
        cout << endl;
    }    

};

#endif