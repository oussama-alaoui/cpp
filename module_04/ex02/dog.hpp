#ifndef DOG_HPP
#define DOG_HPP

#include "animal.hpp"

class Dog : public Animal{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(const Dog &copy);
        Dog &operator=(const Dog &copy);
        ~Dog();
        void makeSound() const;
};

#endif