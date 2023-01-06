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
        }
        else{
            std::cout << "unknown comande" << std::endl;
        }
    }
    return 0;
}

