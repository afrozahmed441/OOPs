#ifndef _USER_
#define _USER_

#include <string>
using std::string;

class User {

    int id;
    string name;

public:

    /// static data members are used to store the class data 
    /// for example number of user objects created etc.
    /// static data members are only initialized once, same like static variables
    /// we need to initialized the static data members using the scope resolution operator
    static int numberOfUsers;

    User(int id, string name);
    ~User();
    /// static member functions
    /// they can only access static data members in the class
    static void printNumberOfUsers();

};


#endif