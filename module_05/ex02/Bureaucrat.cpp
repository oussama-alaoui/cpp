#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name(""){
    std::cout << "constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade) {
    std::cout << "prametrize constructor called" << std::endl;
    if (grade < 1) {
        throw GradeTooHighException();
    } else if (grade > 150) {
        throw GradeTooLowException();
    }
    this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy){
    std::cout << "copy constructor called" << std::endl;
    *this = copy; 
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
    std::cout << "assignation operator called" << std::endl;
    if (this != &copy)
    {
        this->grade = copy.getGrade();
    }
    return (*this);
}

Bureaucrat::~Bureaucrat() {
}

const std::string& Bureaucrat::getName() const {
    return name;
}

int Bureaucrat::getGrade() const {
    return grade;
}

void Bureaucrat::incrementGrade() {
    if (grade - 1 < 1) {
        throw GradeTooHighException();
    }
    grade--;
}

void Bureaucrat::decrementGrade() {
    if (grade + 1 > 150) {
        throw GradeTooLowException();
    }
    grade++;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b) {
    os << b.getName() << ", bureaucrat grade " << b.getGrade();
    return os;
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return ("Grade to High Exception");
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return ("Grade to Low Exception");
}

void Bureaucrat::signForm(Form &f){
    try {
        f.beSigned(*this);
        std::cout << name << " signs " << f.getName() << std::endl;
    } catch (std::exception& e) {
        std::cout << name << " cannot sign " << f.getName() << " because " << e.what() << std::endl;
    }
}

void    Bureaucrat::executeForm( const Form& f ) const {
    try {
        f.execute( *this );
    } catch ( std::exception& e ) {
        std::cout << name << " couldn't execute " << f.getName() << " because " << e.what() << std::endl;
    }
}