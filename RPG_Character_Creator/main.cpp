#include <iostream>
#include "header.hpp"

int main() {
    //COMMENT + CODE ADDED
    //Structure: Character(std::string n, int h, int s, int d, std::string m)

    Tainted Bloodsworn("Orka", 15, 2, 1, true);
    Tainted Ravens("Ilska", 9, 2, 1, true);
    Character BattleGrim("Elvar", 100, 15, 6, false);

    std::cout << "Ilska has " << Ravens.getHealth() << " XP \n";
    std::cout << Bloodsworn.getName() << " attacks " << Ravens.getName() << "!" << std::endl;

    Bloodsworn.attack(Ravens);

    std::string compareHealth(const Tainted &Bloodsworn, const Tainted &Ravens);

    std::cout << "Ilska now has " << Ravens.getHealth() << " XP \n";
    return 0;
}