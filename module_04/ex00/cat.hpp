#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"

class Cat : public Animal{
    public:
        Cat();
        Cat(const Cat &copy);
        Cat &operator=(const Cat &copy);
        virtual ~Cat();
        virtual void makeSound() const;
};

#endif