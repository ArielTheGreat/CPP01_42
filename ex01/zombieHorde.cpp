#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* list_zombies = new Zombie[N];
    int counter;

    counter = 0;
    while(counter < N)
    {
        list_zombies[counter].setName( name );
        counter++;
    }
    return list_zombies;
}
