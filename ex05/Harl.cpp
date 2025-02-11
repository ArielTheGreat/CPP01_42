#include "Harl.hpp"
#include <iostream>
#include <unordered_map>

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
    std::unordered_map<std::string, void (*)()>::iterator it = Harl::map_functions.find(level);
    if(it != Harl::map_functions.end())
    {
        void (*ptr)() = it->second;
        ptr();
    }
}

Harl::Harl ()
{
    Harl::map_functions["DEBUG"] = Harl::debug;
    Harl::map_functions["INFO"] = Harl::info;
    Harl::map_functions["WARNING"] = Harl::warning;
    Harl::map_functions["ERROR"] = Harl::error;
}