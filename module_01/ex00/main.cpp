#include "zombie.hpp"

int main() {
    Zombie *zombie = newZombie("foo");
    zombie->announce();
    delete zombie;
    randomChump("bar");
    return 0;
}