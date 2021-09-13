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

/// access modifiers 
/// There are three types of access modifiers Public, Protected, Private (more on this later)
/// The code inside this is public means than object can call this functions
/// public access modifier
public:
    /// This is a special type of member function
    /// It is called constructor
    /// constructor is invoked or called when a object is created 
    /// It is useful to initalize the object properties when a object is created.
    User(string name, int userAge, char userGender, string userInfo) {

        /// assigning the class properties
        setUserName(name);
        setUserAge(userAge);
        setUserGender(userGender);
        setUserInfo(userInfo);

    }

/// access modifier 
/// The code inside this is private means that object can't call this functions
/// private access modifier
private:
    /// set User name
    void setUserName(string name) {
        this->userName = name;
    }
    /// set User age
    void setUserAge(int age) {
        /// if age is less than or equal to zero then zero 
        if(age <= 0) this->age = 0;
        /// else 
        else this->age = age;
    }
    /// set User gender
    void setUserGender(char g) {
        /// if gender is one of the M || F || O set the user gender to it
        if(g == 'M' || g == 'F' || g == 'O') this->gender = g;
        /// else if gender is one of the m || f || o set the user gender to it
        else if(g == 'm' || g == 'f' || g == 'o') this->gender = g;
        /// else N (None)
        else this->gender = 'N';
    }
    /// set User info
    void setUserInfo(string info) {
        this->info = info;
    }

/// access modifier
public:
    /// return the userName
    string getUserName(){ return (this->userName); }
    /// return the age of the user
    int getUserAge(){ return (this->age); }
    /// return the gender of the user    
    char getUserGender() { return (this->gender); }
    /// return the info of the user
    string getUserInfo() { return (this->info); }
    
    /// display user details
    void display() {
        cout << "Name: " << this->userName << endl;
        cout << "Age: " << this->age << endl;
        cout << "Gender: " << this->gender << endl;
        cout << "Info: "  << this->info << endl;
        cout << endl;
    }    

};

#endif