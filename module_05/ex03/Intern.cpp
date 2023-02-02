#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& other) {
    *this = other;
}

Intern::~Intern() {}

Intern& Intern::operator=(const Intern& other) {
    if(this != &other)
        *this = other;
    return (*this);
}

Form* Intern::makeForm(std::string name, std::string target) {
    Form* forms[3] = {new PresidentialPardonForm(target), new RobotomyRequestForm(target), new ShrubberyCreationForm(target)};
    std::string names[3] ={"Presidential Pardon", "Robotomy Request", "Shrubbery Creation"} ;
    for (int i = 0; i < 3; i++)
    {
        if (names[i] == name)
        {
            for(int j = 0;j < 3; j++)
            {
                if(names[j] != name)
                    delete forms[j];
            }
            std::cout << "Intern creates "<< forms[i]->getName() << std::endl;
            return (forms[i]);
        }
    }
    for (int i = 0; i < 3; i++)
        delete forms[i];
    throw(std::exception());
}