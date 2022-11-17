#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class contact
{
private:
    /* data */
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
    void print_all();
};

#endif
