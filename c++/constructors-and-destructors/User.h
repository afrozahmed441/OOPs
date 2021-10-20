#ifndef _USER_
#define _USER_
#include <string>
using std::string;
/// This Class is used to show the use of constructor initializer list

class User {

    int id;
    string name;

public:
    User(int, string);
    void printUserInfo();

};

#endif