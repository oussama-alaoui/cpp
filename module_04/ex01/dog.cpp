#include "dog.hpp"

Dog::Dog() : Animal("Dog") {
    std::cout << "Dog constructor called" << std::endl;
    this->brain = new (std::nothrow)  Brain();
}

Dog::Dog(const Dog &copy) {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}

Dog &Dog::operator=(const Dog &copy) {
    std::cout << "<Dog> assignation operator called" << std::endl;
    if (this != &copy)
    {
        this->type = copy.type;
        this->brain = new (std::nothrow)  Brain(*copy.brain);
    }
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof woof" << std::endl;
}
