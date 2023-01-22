#include "ClapTrap.hpp"

#include "ScavTrap.hpp"

int main() {
    ScavTrap *scavTrap = new (std::nothrow)  ScavTrap("SC4V-TP");
    if (!scavTrap) {
        std::cout << "Error: cannot allocate memory for ScavTrap" << std::endl;
        return 1;
    }
    scavTrap->attack("Enemy");
    scavTrap->takeDamage(5);
    scavTrap->beRepaired(10);
    scavTrap->guardGate();
    delete scavTrap;
    return 0;
}