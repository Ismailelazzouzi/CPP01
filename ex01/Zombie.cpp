#include "Zombie.hpp"

void    Zombie::setName(std::string name)
{
    this->name = name;
}

std::string    Zombie::getName()
{
    return (this->name);
}

void    Zombie::announce()
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}