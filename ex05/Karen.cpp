#include "Karen.hpp"
#include <iostream>
#include <unordered_map>

void Karen::debug( void )
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-burger.I love it!" << std::endl;
}

void Karen::info( void )
{
    std::cout << "I cannot believe adding extra bacon cost more money.You dont put enough!" << std::endl;
}

void Karen::warning( void )
{
    std::cout << "I think i deserve to have some extra bacon for free..." << std::endl;
}

void Karen::error( void )
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain( std::string level )
{
    std::unordered_map<std::string, void (*)()>::iterator it = Karen::map_functions.find(level);
    if(it != Karen::map_functions.end())
    {
        void (*ptr)() = it->second;
        ptr();
    }
}

Karen::Karen ()
{
    Karen::map_functions["DEBUG"] = Karen::debug;
    Karen::map_functions["INFO"] = Karen::info;
    Karen::map_functions["WARNING"] = Karen::warning;
    Karen::map_functions["ERROR"] = Karen::error;
}