#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
    if (_gradeToSign < 1)
        throw Form::GradeTooHighException();
    if (_gradeToSign > 150)
        throw Form::GradeTooLowException();
    if (_gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (_gradeToExecute > 150)
        throw Form::GradeTooLowException();
}

Form::~Form() {}

std::string Form::getName() const {
    return _name;
}

int Form::getGradeToSign() const {
    return _gradeToSign;
}

int Form::getGradeToExecute() const {
    return _gradeToExecute;
}

bool Form::getSigned() const {
    return _signed;
}

void Form::beSigned(Bureaucrat &b) {
    if (b.getGrade() > _gradeToSign)
        throw Form::GradeTooLowException();
    else
        _signed = true;
}

std::ostream &operator<<(std::ostream &o, Form const &rhs) {
    o << rhs.getName() << ", form grade [" << rhs.getGradeToSign() << "] to sign, [" << rhs.getGradeToExecute() << "] to execute, signed: " << rhs.getSigned();
    return o;
}

const char* Form::GradeTooHighException::what() const throw() {
    return "Grade too high";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Grade too low";
}
