#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>
#include <unordered_map>
class Harl
{
    private:
        std::unordered_map<std::string, void (Harl::*)()> map_functions;

        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        void complain( std::string level );
        Harl( void );
};
#endif