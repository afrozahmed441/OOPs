#ifndef _USER_H_
#define _USER_H_

#include <iostream>
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
        setUserName(name);
        setUserAge(userAge);
        setUserGender(userGender);
        setUserInfo(userInfo);

    }

    void setUserName(string name) {
        this->userName = name;
    }

    void setUserAge(int age) {
        /// if age is less than or equal to zero then zero 
        if(age <= 0) this->age = 0;
        /// else 
        else this->age = age;
    }

    void setUserGender(char g) {
        /// if gender is one of the M || F || O set the user gender to it
        if(g == 'M' || g == 'F' || g == 'O') this->gender = g;
        /// else if gender is one of the m || f || o set the user gender to it
        else if(g == 'm' || g == 'f' || g == 'o') this->gender = g;
        /// else N (None)
        else this->gender = 'N';
    }

    void setUserInfo(string info) {
        this->info = info;
    }

    void display() {
        cout << "Name: " << this->userName << endl;
        cout << "Age: " << this->age << endl;
        cout << "Gender: " << this->gender << endl;
        cout << "Info: "  << this->info << endl;
        cout << endl;
    }    

};

#endif