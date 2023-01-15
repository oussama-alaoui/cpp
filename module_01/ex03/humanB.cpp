#include "humanB.hpp"

HumanB::HumanB(std::string name) : name(name)
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
    if (weapon) {
      std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
    } else {
      std::cout << this->name << " is unarmed" << std::endl;
    }
}