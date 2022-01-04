#include <iostream>
#include <string>

/// There is no such thing called interfaces in c++
/// but we can implement the interfaces using the pure virtual methods.
/// interfaces are total abstraction
/// we can not instantiate interfaces

/// Here Player is an example of interface in c++
class Player {

public:
    static const int defaultHealth = 5;

    virtual void run() = 0;
    virtual void decreaseHealth() = 0;

    virtual ~Player() { }

};

class GamePlayer: public Player {

    std::string name;
    int health;

public:
    GamePlayer(std::string name): name(name), health(100) { }

    virtual void run() {
        std::cout << this->name << " running..." << std::endl;
    }

    virtual void decreaseHealth() {
        std::cout << this->name << " Current Health : " << this->health << std::endl;
        this->health -= defaultHealth;
        std::cout << "Decreasing Health of " << this->name << " " << std::endl;
        std::cout << this->name << " Current Health : " << this->health << std::endl;
    }

    ~GamePlayer() { }

};

int main() {

    /// can not create objects of Player 
    /// Player p1;

    GamePlayer GhostRider{"Ghost Rider"};
    GhostRider.run();
    GhostRider.decreaseHealth();

    Player *witcher = new GamePlayer("Witcher");
    witcher->run();
    witcher->decreaseHealth();

 return 0;
}