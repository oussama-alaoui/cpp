#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Request", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : Form(other), target(other.target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
    Form::operator=(other);
    target = other.target;
    return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
    checkExecution(executor);
    std::cout << "* drilling noises *" << std::endl;
    if (rand() % 2 == 1)
        std::cout << target << " has been robotomized successfully" << std::endl;
    else
        std::cout << "robotomy failed" << std::endl;
}
