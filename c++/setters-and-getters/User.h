#ifndef _USER_H_
#define _USER_H_

#include <string>
using std::string;

/// In CPP we Declare all the function members and attribute in the .h file
/// and Define the function memebers in the .cpp file
/// This way it is more organized and clean and easy to maintain the code

class User{

    string id;
    string name;
    string dob;
    string email;

public:
    User(string userId, string userName, string userDob, string userEmail);

private:
    /// These member functions takes in the data and check if they are valid data and then assign the data
    /// These member functions are only accessible inside the class so these should be declared as private member functions
    void setUserId(string userId);
    void setUserName(string userName);
    void setUserDob(string userDob);
    void setUserEmail(string userEmail);

public:
    /// getter member functios are used to return the data stored by class attributes
    /// These functions can be accessed outside the class so these memeber functions are public
    string getUserId();
    string getUserName();
    string getUserDob();
    string getUserEmail();

    /// display member function to display the user info
    void display();

};


#endif