#include "Harl.hpp"
int main(int argc, char **argv)
{
    Harl harlie;
    if (argc == 2)
    {
        harlie.complain(argv[1]);
    }
    else
    {
        std::cout << "Usage: ./harlFilter <level>" << std::endl;
    }

    return 0;
}