#include <iostream>
#include <string>
#include "User.h"

int main() {

    User u(1, "Afroz", 'M', 21);
    u.getUserInfo();

    /// copy constructor
    User u2 = u;
    u2.getUserInfo();

 return 0;
}