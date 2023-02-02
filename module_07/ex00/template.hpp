#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

#include <iostream>
#include <string>

template<typename T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
T min(const T &a, const T &b) {
    return (a < b) ? a : b;
}

template<typename T>
T max(const T &a, const T &b) {
    return (a > b) ? a : b;
}

#endif