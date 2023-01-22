#include "cat.hpp"

Cat::Cat() : Animal("Cat") {
    std::cout << "Cat constructor called" << std::endl;
    this->brain = new (std::nothrow) (std::nothrow) Brain();
}

Cat::Cat(const Cat &copy) {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}

Cat &Cat::operator=(const Cat &copy) {
    std::cout << "<Cat> assignation operator called" << std::endl;
    if (this != &copy)
    {
        this->type = copy.type;
        this->brain = new (std::nothrow) (std::nothrow) Brain(*copy.brain);
    }
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow meow" << std::endl;
}