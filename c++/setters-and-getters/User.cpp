#include "User.h"
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/// In User.cpp we define the constructors and methods of the class in this file
/// In this way it is organized and neat : )

/// Class Constructor 
User::User(string userId, string userName, string userDob, string userEmail){
        /// Now we use setter member functions to set the user data
        setUserId(userId);
        setUserName(userName);
        setUserDob(userDob);
        setUserEmail(userEmail);
}

/// setter methods
/// this method assigns the UserId if it is user id is valid id
/// In This Example user id is valid if it is 6 digits or 6 letters or combination of digits and letters but must be 6 chars long 
void User::setUserId(string userId){
    /// if userId is less than 6 digit then 000000 is default means id is not init
    if(userId.size() != 6) id = "000000";
    else id = userId;
}

/// set name
void User::setUserName(string userName){
    name = userName;
}

/// set DOb
void User::setUserDob(string userDob){

    bool checkValid = true;

    /// if UserDob is empty
    if(userDob.empty() || userDob == "") dob = "00-00-0000";

    /// if userDob does not contain '-' then userDob is not valid
    if(userDob.find("-") == string::npos) dob = "00-00-0000";

    int i = 0;
    while(i < userDob.size()){

        if(userDob[i] == '-') {
            i++;
        }

        if(!isdigit(userDob[i])) checkValid = false;
        i++;

    }

    if(checkValid) dob  = userDob;
    else dob = "00-00-0000";

}

/// set email

void User::setUserEmail(string userEmail){

    /// if the email is empty then email is NOT AVA
    if(userEmail.empty()) email = "NA";

    /// check if it is a valid email
    if(userEmail.find("@") == string::npos) email = "NA";
    else email = userEmail;

}

//// getters 

/// getUserId return the user id
string User::getUserId(){ return id; }

/// getUserName return the user name
string User::getUserName(){ return name; }

/// getUserDob return Date of birth of user
string User::getUserDob(){ return dob; }

/// getUserEmail return email of user
string User::getUserEmail(){ return email; }


/// display method
/// This method displays the user info
void User::display(){
    cout << endl << "############## User Information #################" << endl;
    cout << "User Id : " << id << endl;
    cout << "User Name : " << name << endl;
    cout << "User Dob : " << dob << endl;
    cout << "User Email : " << email << endl;
    cout << endl;
}