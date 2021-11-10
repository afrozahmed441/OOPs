#include <iostream>
#include "User.h"
using namespace std;

int main() {

    /// creating a const object
    const User u(1, 2000, "Afroz");
    /// const objects can only call const member functions
    /// if you try to call non const functions then it will compiler returns error
    /// printUserInfo is a const function
    u.printUserInfo();

 return 0;
}