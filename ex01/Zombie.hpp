#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
    #include <iostream>

    class Zombie
    {
        std::string name;
        public:
            void announce(void);
            ~Zombie(void);
            void setName( std::string name );
    };
    Zombie* zombieHorde( int N, std::string name );
#endif