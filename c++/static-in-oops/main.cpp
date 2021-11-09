#include <iostream>
#include <string>
#include "User.h"
using namespace std;

int main() {

    User u1(1, "Afroz");
    User u2(2, "Ahmed");
    User u3(3, "Mark");

    cout << "Number of Users : ";
    User::printNumberOfUsers();

 return 0;
}