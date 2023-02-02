#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
<<<<<<< HEAD
=======

#pragma once

>>>>>>> 46c3d65cfc5524f780aee1ffb9c986fdecb464e1
#include <string>
#include <iostream>
#include <stdexcept>
#include <iostream>

class Bureaucrat {
    private:
        const std::string name;
        int grade;

<<<<<<< HEAD
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
=======
    Bureaucrat(std::string name, int grade);
    ~Bureaucrat();
    const std::string& getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();

private:
    const std::string name;
    int grade;
>>>>>>> 46c3d65cfc5524f780aee1ffb9c986fdecb464e1
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif