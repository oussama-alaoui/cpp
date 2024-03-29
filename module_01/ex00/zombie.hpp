#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>
#include <bits/stdc++.h>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie(std::string name);
        ~Zombie();
        void announce();
};

Zombie* new (std::nothrow) Zombie( std::string name );
void randomChump( std::string name );

#endif