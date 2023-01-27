#ifndef ROBOTMYREQUESTFORM_HPP
#define ROBOTMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include <cstdlib>

class RobotomyRequestForm : public Form {
    private:
        std::string target;

    public:
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm&);
        ~RobotomyRequestForm();
        RobotomyRequestForm& operator=(const RobotomyRequestForm&);

        void execute(const Bureaucrat& executor) const;
};

#endif