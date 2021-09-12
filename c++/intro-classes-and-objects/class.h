#ifndef _USER_H_
#define _USER_H_

#include <string>
using namespace std;

class User{

    string userName;
    int age;
    char gender;
    string info;

public:
    User(string name, int userAge, char userGender, string userInfo) {

        /// assigning the class properties
        userName = name;
        age = userAge;
        gender = userGender;
        info = userInfo;

    }

        

};

#endif