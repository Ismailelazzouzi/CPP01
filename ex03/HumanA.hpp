#include "HumanB.hpp"

class HumanA
{
private:
    const std::string &name;
    Weapon &weapon;
public:
    HumanA(const std::string &name, Weapon &weapon);
    ~HumanA();
    void    attack();
};
