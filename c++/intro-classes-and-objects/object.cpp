#include "class.h"
#include <iostream>
using namespace std;

int main(){
    int size = 3;
    User *users[size];

    users[0] = new User("Afroz Ahmed Shaik", 21, 'M', "hi i am Afroz");
    users[1] = new User("A", 31, 'F', "");
    users[2] = new User("B", 41, 'M', "" );

    for(int i = 0; i < size; i++)
        users[i]->display();
    
 return 0;
}