#include <iostream>
#include <string>
#include "contact.hpp"


void print_all(contact contacts[8])
{
    std::cout << std::right << std::setw(10) << "Index";
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "First Name";
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "Last Name";
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "Nick Name";
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "Cell Phone";
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "Secret";
    std::cout << std::endl;
    for (int i = 0; i < 8; i++)
    {   
        contacts[i].print_all(i);
    }
}

void print_column(std::string str)
{
    if (str.length() > 10)
    {
        std::cout << str.substr(0, 9) << ".";
    }
    else
    {
        std::cout << std::right << std::setw(10) << str;
    }
}

void get_index(contact contacts[8])
{
    std::string index;
    std::cout << "Enter index: ";
    std::cin >> index;
    int i = std::stoi(index);
    if (i >= 0 && i < 8)
    {
        contacts[i].print_all_details();
    }
    else
    {
        std::cout << "index out of range" << std::endl;
    }
}


int main() {

    contact contacts[8];

    std::string comande;
    int index = 0;

    while (std::cin >> comande) {
        if (comande == "exit") {
            break;
        } else if (comande == "ADD") {
            if (index < 8) {
                contacts[index].set_all(index);
                index++;
            } else 
                contacts[0].set_all(0);
        } else if (comande == "SEARCH") {
            print_all(contacts);
            get_index(contacts);
        }
        else{
            std::cout << "unknown comande" << std::endl;
        }
    }
    return 0;
}

