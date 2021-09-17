#include <iostream>
#include <string>
#include "User.h"
using namespace std;

int main() {

  /// creating a User object
  User afroz("123456", "Shaik Afroz Ahmed","10-11-2000", "afroz@gmail.com");
  afroz.display();

  /// get data and perform operations on data
  string name, email;

  name = afroz.getUserName();
  email = afroz.getUserEmail();

  cout << "My name is " << name << " and my email is " << email << endl; 

 return 0;
}