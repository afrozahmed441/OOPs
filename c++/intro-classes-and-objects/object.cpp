#include "class.h"
#include <iostream>
using namespace std;

int main(){
    int size = 3;
    /// using pointers in creating objects
    /// array of User pointers
    User *users[size];

    users[0] = new User("Afroz Ahmed Shaik", 21, 'M', "hi i am Afroz");
    users[1] = new User("A", 31, 'F', "");
    users[2] = new User("B", 41, 'M', "" );

    for(int i = 0; i < size; i++)
        /// accessing member funtions (with pointers)
        users[i]->display();
    

    string names[size];
    int ages[size];
    char genders[size];
    string infos[size];

    for(int i = 0; i < size; i++) {
        /// get data from getter member functions (with pointers ->)
        names[i] = users[i]->getUserName();
        ages[i] = users[i]->getUserAge();
        genders[i] = users[i]->getUserGender();
        infos[i] = users[i]->getUserInfo();
    }

    /// without pointers creating objects
    User afroz("Shaik Afroz Ahmed", 21, 'M', "Hello i am CompSci Student");
    User adin("Adin Lebon", 20, 'M', "hey there!");

    /// accessing member functions (without pointers)
    afroz.display();
    adin.display();

    int UserAge1;
    int UserAge2;

    /// get data from getter member functions
    UserAge1 = afroz.getUserAge();
    UserAge2 = adin.getUserAge();

 return 0;
}