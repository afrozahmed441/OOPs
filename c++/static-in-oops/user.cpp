#include <iostream>
#include <string>
#include "User.h"
using namespace std;

User::User(int id, string name) {
    this->id = id;
    this->name = name;
    /// increase the count of users, when objects are created
    ++numberOfUsers;
}

//// initalizing static data member with the class name and scope resolution operator
int User::numberOfUsers = 0;

/// static member function can only access static data members 
void User::printNumberOfUsers() {
    cout << numberOfUsers << endl;
}

/// destructor 
User::~User() {
    /// decrease the count of users, when objects are destroyed.
    numberOfUsers--;
}