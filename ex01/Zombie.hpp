#include <iostream>
#include <string>

class  Zombie
{
private:
    std::string name;
public:
    void    announce();
    void    setName(std::string name);
    std::string getName();
};

Zombie  *zombieHorde(int N, std::string name);