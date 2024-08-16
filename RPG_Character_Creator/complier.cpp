#include "header.hpp"

//Initialiser 
Character::Character(std::string n, int h, int s, \
int d, bool t) : name(n), health(h), strength(s), \
defense(d), tainted(t) {} 

void Character::takeDamage(int damage) {
    health -= damage;
    if (health < 0) health = 0;
}

int Character::usedefense() const{
    return defense;
}

//Changing defense if they are tainted. 
void Character::setdefense(int d){
    defense = d;
}

//Interesting:
//The input is to call the class object and name is 'target'
//It can then alter the state of its health.
//Eg. If character a attacks character b, character b's health will reduce. 

void Character::attack(Character &target) {
    target.takeDamage(strength - target.usedefense());
}

int Character::getHealth() const {
    return health;
}

bool Character::taintedcheck() const{
    return tainted;
}

std::string Character::getName() const {
    return name;
}

//----------------------------------------------- SUBCLASS --------------------------------------------------

Tainted::Tainted(std::string n, int h, int s, int d, bool t) 
        : Character(n, h, s, d, t) {}
    
void Tainted::attack(Character &target) {
    //If the attacker's health is under 10XP, then their strength is increased by 1.5 times. 
    if (getHealth()<10) {
        strength *= 1.5;
    }

    //If the target is tainted, and their health is below 10XP, 
    //Then their defense is increased by 1.5 times. 
    if (target.taintedcheck() == true && target.getHealth() < 10){
        target.setdefense(target.usedefense()*1.5);
    }

    target.takeDamage(strength - target.usedefense());
}
//-------------------------------------------- OUTSIDE OF CLASS ----------------------------------------------
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




