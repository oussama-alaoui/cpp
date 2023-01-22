#include "dog.hpp"
#include "cat.hpp"
#include "Wrongcat.hpp"

int main()
{
    std::cout << "====================" << std::endl;
    const Animal* meta = new (std::nothrow)  Animal();
    const Animal* j = new (std::nothrow)  Dog();
    const Animal* i = new (std::nothrow)  Cat();
    std::cout << "Type: " << j->getType() << " " << std::endl;
    std::cout << "Type: " << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    std::cout << "====================" << std::endl;

    const WrongAnimal *wrong = new (std::nothrow)  WrongAnimal();
    const WrongAnimal *wrongCat = new (std::nothrow)  WrongCat();

    std::cout << "Wrong Type: " << wrong->getType() << " " << std::endl;
    std::cout << "WrongCat Type: " << wrongCat->getType() << " " << std::endl;
    wrong->makeSound();
    wrongCat->makeSound();

    delete wrong;
    delete wrongCat;
    return 0;
}