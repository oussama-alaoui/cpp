#include "humanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon)
{
    std::cout << name <<" constructor called" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA destructor called" << std::endl;
}

void HumanA::attack()
{
    std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}