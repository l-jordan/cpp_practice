#include "header.hpp"

//Initialiser 
Character::Character(std::string n, int h, int s, \
int d, std::string m, int sp) : name(n), health(h), strength(s), \
defense(d), magic(m), speed(sp) {

}

void Character::takeDamage(int damage) {
    health -= damage;
    if (health < 0) health = 0;
}

//Interesting:
//The input is to call the class object and name is 'target'
//It can then alter the state of its health.
//Eg. If character a attacks character b, character b's health will reduce. 
void Character::attack(Character &target) {
    target.takeDamage(strength);
}

int Character::getHealth() const {
    return health;
}

std::string Character::getName() const {
    return name;
}

std::string compareHealth(const Character &a, const Character &b) {
    //Getting health of character a and b
    if (a.getHealth() > b.getHealth()) {
        return a.getName() + " is healthier.";
    } else if (a.getHealth() < b.getHealth()) {
        return b.getName() + " is healthier.";
    } else {
        return "Both have the same health.";
    }
}
