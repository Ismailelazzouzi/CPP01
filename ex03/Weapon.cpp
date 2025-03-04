#include "Weapon.hpp"

Weapon::Weapon(const std::string &type)
{
    this->type = type;
}

Weapon::~Weapon()
{
}

void    Weapon::setType(const std::string &type)
{
    this->type = type;
}

const std::string &Weapon::getType() const
{
    const std::string &typeRef = this->type;
    return (typeRef);
}