#include "zombie.hpp"

int main ()
{
    int N = 3;
    Zombie *horode;

    horode = zombieHorde(N, "test");
    for (int i = 0; i < N; i++)
        horode[i].announce();
    delete[] horode;
}