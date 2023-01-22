#include "ClapTrap.hpp"

int main()
{
    ClapTrap *clapTrap = new (std::nothrow)  ClapTrap("CL4P-TP");
    if (!clapTrap) {
        std::cout << "Error: cannot allocate memory for ClapTrap" << std::endl;
        return 1;
    }
    clapTrap->attack("Enemy");
    clapTrap->takeDamage(5);
    clapTrap->beRepaired(10);
    clapTrap->beRepaired(5);
    clapTrap->takeDamage(15);
    delete clapTrap;
    return 0;
}