#include "Harl.hpp"
#include <iostream>
#include <unordered_map>

void Harl::debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-burger.I love it!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money.You dont put enough!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think i deserve to have some extra bacon for free..." << std::endl;
}

void Harl::error( void )
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

Harl::Harl( void )
{
    Harl::list["DEBUG"] = 0;
    Harl::list["INFO"] = 1;
    Harl::list["WARNING"] = 2;
    Harl::list["ERROR"] = 3;
}

void Harl::complain( std::string level )
{
    int x;

    std::unordered_map<std::string, int>::iterator it = Harl::list.find(level);
    if (it != Harl::list.end())
    {
        x = it->second;
    }
    else{
        x = 6;
    }
    switch (x)
    {
    case 0:
        this->debug();
    case 1:
        this->info();
    case 2:
        this->warning();
    case 3:
        this->error();
        break;
    
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }
}