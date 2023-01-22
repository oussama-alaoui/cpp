#include "dog.hpp"
#include "cat.hpp"
#include "Wrongcat.hpp"

int main( void )
{
    const Animal* j = new (std::nothrow)  Dog();
    const Animal* i = new (std::nothrow)  Cat();

    delete j;//should not create a leak
    delete i;

    const Animal* animals[4] = { new (std::nothrow)  Dog(), new (std::nothrow)  Dog(), new (std::nothrow)  Cat(), new (std::nothrow)  Cat() };
    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
    }

    return 0;
}