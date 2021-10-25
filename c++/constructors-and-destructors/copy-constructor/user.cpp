#include <iostream>
#include <string>
#include "User.h"
using namespace std;

User::User(int idVal, string nameVal, char genderVal, int ageVal): id{idVal}, name{nameVal}, gender{genderVal}, age{ageVal} {}

/// copy constructor
/// C++ compiler will create a default constructor which copies all the member variables as it is when the copy constructor is not defined
/// This is a shollow copy (same like copy constructor created by compiler)
/// It is a memberwise copy, each data member is copied from source object
User::User(const User &source): id{source.id}, name{source.name}, gender{source.gender}, age{source.age} {
    cout << "-------- COPY CONSTRUCTOR ------------ " << endl;
}

/**
 
 ------------------------------- Deep Copy Constructor ------------------------------
 ---- When ur working with the pointers in the data members then you need to create deep copy constructor 
 ---- we need to allocate new data space dynamically and then assign the value to it.
 
 User(const User &s) {
      source = new int;
      *source = s;
 }


*/

void User::getUserInfo() {
    cout << "------------------------- User Info -------------------------- " << endl;
    cout << "ID : " << id << endl;
    cout << "NAME : " << name << endl;
    cout << "GENDER : " << gender << endl;
    cout << "AGE : " << age << endl; 
}