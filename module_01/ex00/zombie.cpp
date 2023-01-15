#include "zombie.hpp"

Zombie::Zombie(std::string name) {
    this->name = name;
}

Zombie::~Zombie() {
    std::cout << this->name <<" is dead" << std::endl;
}

void Zombie::announce() {
    std::cout << this->name << " iBraiiiiiiinnnzzzZ..." << std::endl;
}
