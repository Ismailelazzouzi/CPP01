#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : name(name), weapon(nullptr)
{
}

HumanB::~HumanB()
{
}

void    HumanB::setWeapon(Weapon &newWeapon)
{
    this->weapon = &newWeapon;
}

void    HumanB::attack()
{
    if (weapon)
        std::cout << this->name << "  attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << this->name << "  has no weapon !" << std::endl;
}