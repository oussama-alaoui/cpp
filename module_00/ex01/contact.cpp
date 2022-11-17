#include "contact.hpp"

#include <iostream>

contact::contact(/* args */)
{
}
contact::~contact()
{
}

void contact::set_all(int index)
{
    this->index = index;
    std::cout << "Enter first name: ";
    std::cin >> this->firstname;
    std::cout << "Enter last name: ";
    std::cin >> this->lastname;
    std::cout << "Enter nickname: ";
    std::cin >> this->nickname;
    std::cout << "Enter phone number: ";
    std::cin >> this->phone_number;
    std::cout << "Enter darkest secret: ";
    std::cin >> this->darkest_secret;
}

void contact::print_all()
{
    std::cout << "index | first name | last name | nickname" << std::endl;
    std::cout << this->index << " | " << this->firstname << " | " << this->lastname << " | " << this->nickname << std::endl;
}