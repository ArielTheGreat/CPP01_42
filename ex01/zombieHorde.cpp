#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0)
	{
		std::cerr << "[Error]: N cannot be negative!" << std::endl;
		return nullptr;
	}
    Zombie* list_zombies = new Zombie[N];
    for (int i = 0; i < N; i++) {
        new (&list_zombies[i]) Zombie(name);
    }
    return list_zombies;
}
