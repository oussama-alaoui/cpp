#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#pragma once

#include <string>
#include <iostream>
#include <stdexcept>

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

private:
    const std::string name;
    int grade;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif