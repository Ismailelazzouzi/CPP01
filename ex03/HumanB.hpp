#include "Weapon.hpp"

class HumanB
{
private:
    const std::string &name;
    Weapon *weapon;
public:
    HumanB(const std::string &name);
    ~HumanB();
    void    setWeapon(Weapon &weapon);
    void    attack();
};
