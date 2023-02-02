#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

<<<<<<< HEAD
#include <string>
#include <stdexcept>
#include <iostream>

#include "Form.hpp"

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
=======

#include <string>
#include <iostream>
#include <stdexcept>

#include "Form.hpp"

class Bureaucrat {
public:
    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw() {
            return "Grade too high";
        }
    };
    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw() {
            return "Grade too low";
        }
    };

    Bureaucrat(std::string name, int grade);
    ~Bureaucrat();
    const std::string& getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();

    void signForm(Form& f);

private:
    const std::string name;
    int grade;
>>>>>>> 46c3d65cfc5524f780aee1ffb9c986fdecb464e1
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif