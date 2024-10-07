#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>
#include <unordered_map>
class Harl
{
    std::unordered_map<std::string, int> list;
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        void complain( std::string level );
        Harl( void );
};
#endif