#include "Harl.hpp"
int main(int argc, char **argv)
{
    Harl harlie;
    if (argc > 0)
    {
        harlie.complain(argv[1]);
    }
    return 0;
}