#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie* zombieObj = new Zombie(name);
    return zombieObj;
}