#include <iostream>
#include <string>
#include "contact.hpp"

int main() {

    contact contacts[8];

    std::string comande;
    int sersh_index;
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
            std::cin >> sersh_index;
            // std::cout << "     index|first name| last name|  nickname" << std::endl;
            contacts[sersh_index].print_all();
        }
        else{
            std::cout << "unknown comande" << std::endl;
        }
    }
    return 0;
}

