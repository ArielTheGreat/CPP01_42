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
    std::unordered_map<std::string, void (Harl::*)()>::iterator it = map_functions.find(level);
    if (it != map_functions.end())
    {
        (this->*(it->second))();
    }
    else
    {
        std::cout << "Unknown complaint level: " << level << std::endl;
    }
}

Harl::Harl ()
{
    map_functions["DEBUG"] = &Harl::debug;
    map_functions["INFO"] = &Harl::info;
    map_functions["WARNING"] = &Harl::warning;
    map_functions["ERROR"] = &Harl::error;
}