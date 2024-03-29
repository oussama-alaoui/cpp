#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <stdexcept>
#include <iostream>

#include "AForm.hpp"

class Form;

class Bureaucrat {
    private:
        const std::string name;
        int grade;

    public:
        class GradeTooHighException : public std::exception {
        public:
            const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
        public:
            const char* what() const throw();
        };
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat &operator=(const Bureaucrat &copy);
        ~Bureaucrat();
        const std::string& getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();

        void signForm(Form& f);
        void executeForm(const Form& form) const;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif