#ifndef FIXED_HPP
#define FIXED_HPP

#include <iosfwd>
#include <cmath>
#include <iostream>

class Fixed {
    int value;
    static const int fractional_bits = 8;

public:
    Fixed();
    Fixed(const Fixed&);
    ~Fixed();
    Fixed& operator=(const Fixed&);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    Fixed(int);
    Fixed(float);
    float toFloat(void) const;
    int toInt(void) const;
    bool operator>(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;
    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;
    Fixed& operator++();
    Fixed operator++(int);
    Fixed& operator--();
    Fixed operator--(int);
    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fp);

#endif