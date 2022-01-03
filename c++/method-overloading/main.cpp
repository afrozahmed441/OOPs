#include <iostream>
#include <string>
#include "Player.h"
using namespace std;

int main() {

    Player p1{"Ghost Rider"};
    
    p1.printName();
    p1.printName("PRO");
    
    cout << p1.getName() <<  " Current Health : " << p1.getHealth() << endl;
    p1.decreaseHealth();
    
    cout << p1.getName() <<  " Current Health : " << p1.getHealth() << endl;
    p1.decreaseHealth(10);

    cout << p1.getName() <<  " Current Health : " << p1.getHealth() << endl;
    p1.decreaseHealth(12.5);

    cout << p1.getName() <<  " Current Health : " << p1.getHealth() << endl;


 return 0;
}