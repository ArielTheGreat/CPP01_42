#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* list_zombies;
    int counter;

    if (N < 0)
	{
		std::cerr << "[Error]: N cannot be negative!" << std::endl;
		return nullptr;
	}
    list_zombies = new Zombie[N];
    counter = 0;
    while(counter < N)
    {
        list_zombies[counter].setName( name );
        counter++;
    }
    return list_zombies;
}
