#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon* weapon;
    public:
        HumanB(std::string name);
        ~HumanB();
        void setWeapon(Weapon& weapon);
        void attack();
};

#endif