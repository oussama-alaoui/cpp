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

void contact::print_all_details()
{
    std::cout << "first name: " << this->firstname << std::endl;
    std::cout << "last name: " << this->lastname << std::endl;
    std::cout << "nickname: " << this->nickname << std::endl;
    std::cout << "phone number: " << this->phone_number << std::endl;
    std::cout << "darkest_secret: " << this->darkest_secret << std::endl;
}

void contact::print_all(int index)
{
    std::cout << std::right << std::setw(10) << index;
    std::cout << "|";
    print_column(this->firstname);
    std::cout << "|";
    print_column(this->lastname);
    std::cout << "|";
    print_column(this->nickname);
    std::cout << "|";
    print_column(this->phone_number);
    std::cout << "|";
    print_column(this->darkest_secret);
    std::cout << std::endl;
}