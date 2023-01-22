#include "zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N == 0)
        return (NULL);
    Zombie *zombieHorde = new (std::nothrow)  Zombie[N];
    for (int i = 0; i < N; i++)
        zombieHorde[i].setName(name);
    return (zombieHorde);
}