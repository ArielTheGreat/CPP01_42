#include <iostream>
#include "HumanB.hpp"

void HumanB::attack()
{
    if (weapon)
    {
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    }
    else
    {
        std::cout << name << " has no weapon to attack with!" << std::endl;
    }
}

HumanB::HumanB(std::string _name) : name(_name), weapon(nullptr) {}

void HumanB::setWeapon(Weapon& newWeapon)
{
    this->weapon = &newWeapon;
}