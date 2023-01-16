#ifndef FIXED_HPP
#define FIXED_HPP

#include <iosfwd>
#include <cmath>
#include <iostream>

class Fixed {
private:
    int value;
    static const int fractional_bits = 8;

public:
    Fixed();
    Fixed(int i);
    Fixed(float f);
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& other);
    ~Fixed();

    int getRawBits() const;
    void setRawBits(int raw);
    float toFloat() const;
    int toInt() const;
};

std::ostream& operator<<(std::ostream& cout, const Fixed& fixed);

#endif