#include "fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    fixedPointVal = 0;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    fixedPointVal = other.getRawBits();
}

Fixed::~Fixed() {   std::cout << "Destructor called" << std::endl;  }

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Assignation operator called" << std::endl;
    fixedPointVal = other.fixedPointVal;
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return fixedPointVal;
}

void Fixed::setRawBits(int const raw)
{
    fixedPointVal = raw;
}