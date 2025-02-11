#include "Zombie.hpp"

int main(void)
{
    int		number_zombies;
	Zombie	*horde;

	number_zombies = 9;
	horde = zombieHorde(number_zombies, "francisco");
	if (horde == nullptr)
	{
		std::cerr << "[ERRRO]: Failed to create zombie horde!";
		return (1);
	}
	for (int i = 0; i < number_zombies; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
    return 0;
}