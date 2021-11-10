#ifndef _USER_
#define _USER_

#include <string>
using std::string;

class User {

    int id;
    /// const data member 
    /// const data member should be initialized using only initializer list 
    /// once initialized can't be modified even in the constructor or destructor
    const int yearOfBirth;
    string name;

public:
    User(int id, int YOB, string name);

    /// const member functions 
    /// const member functions can be accessed by both non const objects and const objects
    /// But const objects can only access const member functions. 
    void printUserInfo() const;

};

#endif