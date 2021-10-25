#ifndef _USER_
#define _USER_

#include <string>
using std::string;

class User {

    int id;
    string name;
    char gender;
    int age;

public:
    User(int idVal=0, string nameVal="NULL", char genderVal='N', int age=0);
    /// copy constructor
    /// copy constructor is a special type of constructor 
    /// which is called when we pass a object in arguments by value or return object by value from the function 
    /// when you create a copy of the object using an existing object. Ex: User u2 = u1;
    User(const User &);
    void getUserInfo();

};


#endif