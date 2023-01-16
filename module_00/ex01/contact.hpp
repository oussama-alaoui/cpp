#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <string> //std::string
#include <iomanip> // set
#include <sstream> // std::stringstream

class contact
{
    private:
        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
        int index;

    public:
        contact(/* args */);
        ~contact();
        void set_all(int index);
        void print_all(int index);
        void print_all_details();
};

void print_column(std::string str);

#endif
