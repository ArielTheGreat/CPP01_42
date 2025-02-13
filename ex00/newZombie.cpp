#include "Zombie.hpp"

Zombie* newZombie(const std::string& name )
{
    Zombie* zombieObj = new Zombie(name);
    return zombieObj;
}