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
    

    /// without pointers creating objects
    User afroz("Shaik Afroz Ahmed", 21, 'M', "Hello i am CompSci Student");
    User adin("Adin Lebon", 20, 'M', "hey there!");

    /// accessing member functions (without pointers)
    afroz.display();
    adin.display();

 return 0;
}