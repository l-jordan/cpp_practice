#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

class Character {
private: //Variables
    std::string name;
    int health;
    int strength;

    //CODE ADDED
    int defense;
    std::string magic; //change to a vector?
    int speed;

public: //Methods
    Character(std::string n, int h, int s, int d, std::string m, int sp);
    void takeDamage(int damage);
    void attack(Character &target);
    int getHealth() const;
    std::string getName() const;
};

// Standalone function to compare two characters' health
std::string compareHealth(const Character &a, const Character &b);

#endif // CHARACTER_H
