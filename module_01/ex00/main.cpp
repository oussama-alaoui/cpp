#include "zombie.hpp"

int main() {
    Zombie *zombie = new (std::nothrow) Zombie("foo");
    zombie->announce();
    randomChump("bar");
    delete zombie;
    return 0;
}