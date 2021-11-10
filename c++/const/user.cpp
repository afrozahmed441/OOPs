#include <iostream>
#include "User.h"
using namespace std;

//// initializing const data members with initializer list
User::User(int id, int YOB, string name): id{id}, yearOfBirth{YOB}, name{name} { }

/// once declared in the function
void User::printUserInfo() const {
    cout << "ID : " << this->id << endl;
    cout << "YOB : " << this->yearOfBirth << endl;
    cout << "Name : " << this->name << endl;
}