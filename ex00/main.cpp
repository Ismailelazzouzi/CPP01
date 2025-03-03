#include "Zombie.hpp"

int main()
{
    Zombie  *zombie;

    std::cout << "Creating zombie named samael in stack" << std::endl;
    randomChump("samael");
    std::cout << "Creating zombie named ismail in heap" << std::endl;
    zombie = newZombie("ismail");
    zombie->announce();
    std::cout << "ismail is still alive since it was allocated on heap" << std::endl;
    delete zombie;
}