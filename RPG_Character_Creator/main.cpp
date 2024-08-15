#include <iostream>
#include "header.hpp"

int main() {
    //COMMENT + CODE ADDED
    //Structure: Character(std::string n, int h, int s, int d, std::string m, int sp)

    Character hero("Hero", 100, 20, 5, 'Levitate', 10);
    Character villain("Villain", 80, 15, 7, 'Invisibility', 15);

    std::cout << hero.getName() << " attacks " << villain.getName() << "!" << std::endl;
    hero.attack(villain);

    std::cout << villain.getName() << " has " << villain.getHealth() << " health left." << std::endl;

    std::cout << compareHealth(hero, villain) << std::endl;

    return 0;
}
