#include "zombie.hpp"

Zombie* new (std::nothrow) Zombie( std::string name ) {
    Zombie *zombie = new (std::nothrow)  Zombie(name);
    return zombie;
}