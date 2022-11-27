#include "humanB.hpp"

HumanB::HumanB(std::string name)
{
    std::cout << name <<" constructor called" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "humanb destructor called" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack()
{
    std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}