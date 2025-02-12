#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Destructing " << Zombie::name << std::endl;
}
