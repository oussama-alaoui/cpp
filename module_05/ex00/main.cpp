#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat b("bur1", 0); // should throw a Bureaucrat::GradeTooHighException
    } catch (Bureaucrat::GradeTooHighException& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat b("bur2", 151); // should throw a Bureaucrat::GradeTooLowException
    } catch (Bureaucrat::GradeTooLowException& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat b("bur3", 1);
        b.incrementGrade(); // should throw a Bureaucrat::GradeTooHighException
    } catch (Bureaucrat::GradeTooHighException& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat b("bur4", 150);
        b.decrementGrade(); // should throw a Bureaucrat::GradeTooLowException
    } catch (Bureaucrat::GradeTooLowException& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}