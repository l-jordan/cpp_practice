#ifndef HEADER_HPP
#define HEADER_HPP

#include <string>

class Character {
private: //Variables
    std::string name;

    //CODE ADDED
    bool tainted;

public: //Methods
    Character(std::string n, int h, int s, int d, bool t);
    void takeDamage(int damage);
    virtual void attack(Character &target);
    int usedefense() const;
    void setdefense(int d);
    int getHealth() const;
    bool taintedcheck() const;
    std::string getName() const;

//Used to update parameters using subclasses
protected:
    int health;
    int strength;
    int defense;
};

//--------------------------------------- SUBCLASS -------------------------------------------
class Tainted : public Character {
public:
    Tainted(std::string n, int h, int s, int d, bool t);
    void attack(Character &target) override;
};

// Standalone function to compare two characters' health
std::string compareHealth(const Character &a, const Character &b);


#endif 