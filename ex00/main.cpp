#include "Zombie.hpp"

int main()
{
    Zombie *randomZombie = newZombie("Mateo");
    randomZombie->announce();
    delete(randomZombie);
    return 0;
}