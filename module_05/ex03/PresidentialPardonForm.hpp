#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public Form {
    private:
        std::string target;

    public:
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm&);
        ~PresidentialPardonForm();
        PresidentialPardonForm& operator=(const PresidentialPardonForm&);

        void execute(const Bureaucrat& executor) const;
};

#endif