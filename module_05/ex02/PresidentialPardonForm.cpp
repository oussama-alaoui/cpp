#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon", 25, 5) {
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : Form(other) {
    this->target = other.target;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
    if (this != &other) {
        Form::operator=(other);
        this->target = other.target;
    }
    return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const {
    checkExecution(executor);
    std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
