#ifndef _PLAYER_
#define _PLAYER_

#include <string>
using std::string;

class Player {

    string name;
    double health;
    static double defaultHealthDecrease;

public:
    Player(string name);
    
    /// overaloding printName method 
    /// rules to overloading a method 
    /// 1. The name of the method must be same.
    /// 2. The parameters list and parameters type should differ.
    /// NOTE : we do not consider the return type here for the overloading
    /// NOTE : Using overloading we can achieve compile time polymorphism
    void printName();
    void printName(string);

    /// overloading decreaseHealth method 
    void decreaseHealth();
    void decreaseHealth(int);
    void decreaseHealth(double);

    string getName() const;
    double getHealth() const;

};


#endif