#include "Zombie.hpp"

int main()
{
    //Object on Heap
    Zombie *randomZombie = newZombie("Mateo");
    randomZombie->announce();
    delete(randomZombie);
    //Object on Stack
	randomChump("Lucia");
    return 0;
}