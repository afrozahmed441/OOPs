#include <iostream>
#include <string>

class Player {

    std::string avatarName;

public:
    Player(std::string name): avatarName(name) { }

    std::string getAvatarName() {
        return this->avatarName;
    }
};

/// final keyword (c++11)
/// final keyword when used at the class level 
/// it makes the class non inheritable 
/// In below example we can not inherit the GhostRider class 
class GhostRider final : public Player{
    
    int level;
    int health;

public:
    GhostRider(int level): Player("Ghost Rider"), level(level) {
        setHealth();
    }

    /// using final at method level 
    /// will prevent any virtual method in the class to be overridden
    virtual void setHealth() final {
        this->health = 100;
    }

    int getLevel() {
        return this->level;
    }

    int getHealth() {
        return this->health;
    }
};



int main() {

    GhostRider ghostPlayer{3};

    std::cout << " --------------- Player Info ---------------" << std::endl;
    std::cout << "Avatar Name : " << ghostPlayer.getAvatarName() << std::endl;
    std::cout << "Player Level : " << ghostPlayer.getLevel() << std::endl;
    std::cout << "Player Health : " << ghostPlayer.getHealth() << std::endl;
    

 return 0;
}