#include <iostream>
#include "HumanA.hpp"



void HumanA::attack()
{
    std::cout << this->name << " attacks with his " << this->weapon.getType() << std:: endl;
}

// HumanA::HumanA(Weapon weapon):weapon(weapon) {}

HumanA::HumanA(std::string name,Weapon& weapon):name(name),weapon(weapon) {}