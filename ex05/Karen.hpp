#ifndef KAREN_HPP
#define KAREN_HPP
#include <iostream>
#include <unordered_map>
class Karen
{
    private:
        std::unordered_map<std::string, void (*)()> map_functions;

        static void debug( void );
        static void info( void );
        static void warning( void );
        static void error( void );
    public:
        void complain( std::string level );
        Karen( void );
};
#endif