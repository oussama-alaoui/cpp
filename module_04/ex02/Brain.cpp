#include "Brin.hpp"

Brain::Brain(){
    std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain(){
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &copy){
    std::cout << "Brain copy constructor called" << std::endl;
    *this = copy;
}

Brain &Brain::operator=(const Brain &copy){
    std::cout << "Brain assignation operator called" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = copy.ideas[i];
    return *this;
}
