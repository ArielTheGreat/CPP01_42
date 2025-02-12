#include "Weapon.hpp"

const std::string& Weapon::getType(void)
{
    return this->type;
}

void Weapon::setType(const std::string& type)
{
    this->type = type;
}

Weapon::Weapon(std::string _type) : type(_type) {}

Weapon::Weapon()
{
    this->type = "No defined weapon";
}