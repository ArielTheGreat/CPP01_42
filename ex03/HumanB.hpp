#ifndef HUMANB_HPP
#define HUMANB_HPP   
    #include <iostream>
    #include "Weapon.hpp"

    class HumanB
    {
        private:
            std::string name;
            Weapon* weapon;
        public:
            void attack();
            void setWeapon(Weapon &newWeapon);
            HumanB( void );
            HumanB( std::string name );
    };
#endif