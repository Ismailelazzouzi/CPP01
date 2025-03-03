#include "Zombie.hpp"

int main()
{
    Zombie *zombies;
    zombies = zombieHorde(10, "samael");
    for (int i = 0; i < 10; i++)
    {
        std::cout << "name : " << zombies[i].getName() << std::endl;
    }
    delete[] zombies;
}