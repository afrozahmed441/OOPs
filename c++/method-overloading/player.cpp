#include <iostream>
#include <string> 
#include "Player.h"
using namespace std;

/// init static data member of the class
double Player::defaultHealthDecrease = 5;

Player::Player(string name): name(name) {
    this->health = 100.00;
}

/// methods 
void Player::printName() {
    cout << "Name : " << this->name << endl;
}

void Player::printName(string pro) {
    cout << "Name : " << this->name << " [ " << pro  << " ] " << endl;
}

void Player::decreaseHealth() { this->health -= defaultHealthDecrease; }
void Player::decreaseHealth(int dHealth) { this->health -= dHealth; }
void Player::decreaseHealth(double dHealth) { this->health -= dHealth; }

string Player::getName() const { return this->name; }
double Player::getHealth() const { return this->health; }
