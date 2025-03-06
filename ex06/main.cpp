#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        Harl harl;
        std::string level = av[1];
        std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
        size_t choice;
        for (size_t i = 0; i < 4; i++)
        {
            if (!level.compare(levels[i]))
                choice = i;
        }
        
        switch (choice)
        {
        case 0:
            for (size_t i = 0; i < 4; i++)
            {
                harl.complain(levels[i]);
            }
            break;
        case 1:
            for (size_t i = 1; i < 4; i++)
            {
                harl.complain(levels[i]);
            }
            break;
        case 2:
            for (size_t i = 2; i < 4; i++)
            {
                harl.complain(levels[i]);
            }
            break;
        case 3:
            for (size_t i = 3; i < 4; i++)
            {
                harl.complain(levels[i]);
            }
            break;
        
        default:
            break;
        }
    }
}