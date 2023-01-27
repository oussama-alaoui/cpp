#include "Form.hpp"

Form::Form() : _name(""), _gradeToSign(0), _gradeToExecute(0)
{
    std::cout << "Form Constructor" << std::endl;
    this->_signed = true;
}


Form::Form(std::string const &name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
    if (_gradeToSign < 1)
        throw Form::GradeTooHighException();
    if (_gradeToSign > 150)
        throw Form::GradeTooLowException();
    if (_gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (_gradeToExecute > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form &copy) : _name(copy._name), _signed(copy._signed), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute) {}

Form& Form::operator=(const Form& other) {
    if (this != &other) {
        _signed = other._signed;
    }
    return *this;
}

Form::~Form() {
    std::cout << "destructor called" << std::endl;
}

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

void Form::beSigned(const Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > _gradeToSign)
        throw Form::GradeTooLowException();
    _signed = true;
}

std::ostream &operator<<(std::ostream &out, Form const &src) {
    out << src.getName() << ", grade to sign " << src.getGradeToSign() << ", grade to execute " << src.getGradeToExecute() << ", ";
    if (src.getSigned())
        out << "signed";
    else
        out << "not signed";
    return out;
}

const char* Form::GradeTooHighException::what() const throw() {
    return "grade is too high";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "grade is low high";
}