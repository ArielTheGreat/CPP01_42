#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
    #include <iostream>
    #include <string>

    class Zombie
    {
        private:
            std::string name;
        public:
            void announce(void);
            Zombie() : name("Unnamed") {}
            Zombie(std::string _name) : name(_name){}
            ~Zombie();
    };

    Zombie* newZombie( std::string name );
    void randomChump( std::string name );
#endif