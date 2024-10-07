#include <iostream>
#include "HumanB.hpp"

void HumanB::attack()
{
    std::cout << HumanB::name << " attacks with his " << HumanB::weapon->getType() << std:: endl;
}

HumanB::HumanB( std::string name )
{
    this->name = name;
}

void HumanB::setWeapon(Weapon& newWeapon)
{
    this->weapon = &newWeapon;
}