#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
    #include <iostream>
    #include <string>

    class Zombie
    {
        private:
            std::string name;
        public:
            Zombie(const std::string& _name) : name(_name) {}
            Zombie() : name("Unnamed") {}
            ~Zombie();
            void announce(void);
    };
    Zombie* zombieHorde( int N, std::string name );
#endif