#include <iostream>
#include <string>
#include "User.h"
using namespace std;

User::User(int id, string name) {
    this->id = id;
    this->name = name;
    ++numberOfUsers;
}

int User::numberOfUsers = 0;

void User::printNumberOfUsers() {
    cout << numberOfUsers << endl;
}

User::~User() {
    numberOfUsers--;
}