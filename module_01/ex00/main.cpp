#include "zombie.hpp"

int main() {
    Zombie *zombie = newZombie("foo");
    zombie->announce();
    randomChump("bar");
    delete zombie;
    return 0;
}