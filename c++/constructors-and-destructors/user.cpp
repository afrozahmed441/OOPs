#include <iostream>
#include <string>
#include "User.h"
using namespace std;


/// Here is the constructor initalizer list syntax 
/// initilzer list is used to initalize the data member of the class
User::User(int id, string name) : id{id}, name{name} {}

/**
 * Constructor initalizer list syntax Use Cases : 
 * When the parameter variable names and the data member variable names are same then we can use initilzer list or we need to use this pointer in the constructor body ( we will see this pointer in later section)
 * When the data member is a non-static const 
 * Initalizing the reference data members
 * For initalizing the data members as soon as the constructor is called and before code in the body of constructor is executed 
*/

void User::printUserInfo() {
    cout << "-------------- User info ---------------" << endl;
    cout << "User id : " << id << endl;
    cout << "User name : " << name << endl;
}

