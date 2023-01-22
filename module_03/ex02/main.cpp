
#include "FragTrap.hpp"

int main() {
    FragTrap *fragTrap = new (std::nothrow)  FragTrap("FR4G-TP");
    fragTrap->attack("Enemy");
    fragTrap->takeDamage(5);
    fragTrap->beRepaired(10);
    fragTrap->highFivesGuys();
    delete fragTrap;
    return 0;
}