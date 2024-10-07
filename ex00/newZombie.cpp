#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie* zombieObj = new Zombie;
    zombieObj->setName( name );
    return zombieObj;
}