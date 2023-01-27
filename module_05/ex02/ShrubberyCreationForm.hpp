#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
    private:
        std::string target;
    public:
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm&);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);

        void execute(const Bureaucrat& executor) const;
};

#endif