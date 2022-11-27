#include "zombie.hpp"

Zombie::Zombie(std::string name) {
    this->name = name;
}

Zombie::~Zombie() {
    std::cout << this->name <<" is dead" << std::endl;
}

void Zombie::announce() {
    if (this->name.compare("foo") == 0)
        std::cout << this->name << " iBraiiiiiiinnnzzzZ..." << std::endl;
    else
        std::cout << "<" << this->name << ">" <<" BraiiiiiiinnnzzzZ..." << std::endl;
}
