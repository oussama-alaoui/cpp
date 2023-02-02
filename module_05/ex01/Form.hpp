<<<<<<< HEAD
#ifndef Form_HPP
#define Form_HPP

#include "Bureaucrat.hpp"
=======
#ifndef Form_H
#define Form_H

#include <iostream>
#include <string>
>>>>>>> 46c3d65cfc5524f780aee1ffb9c986fdecb464e1

class Bureaucrat;

class Form {
<<<<<<< HEAD
    private:
        std::string const _name;
        bool _signed;
        int const _gradeToSign;
        int const _gradeToExecute;

    public:
        Form();
        Form(const std::string &name, int gradeToSign, int gradeToExecute);
=======
    public:
        Form(std::string name, int gradeToSign, int gradeToExecute);
>>>>>>> 46c3d65cfc5524f780aee1ffb9c986fdecb464e1
        Form(Form const&);
        Form& operator=(Form const&);
        ~Form();

        std::string getName() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        bool getSigned() const;
<<<<<<< HEAD
        void beSigned(const Bureaucrat &bureaucrat);
=======
        void beSigned(Bureaucrat&);
>>>>>>> 46c3d65cfc5524f780aee1ffb9c986fdecb464e1

        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
<<<<<<< HEAD
=======

    private:
        Form();
        std::string _name;
        bool _signed;
        int _gradeToSign;
        int _gradeToExecute;
>>>>>>> 46c3d65cfc5524f780aee1ffb9c986fdecb464e1
};

std::ostream& operator<<(std::ostream&, Form const&);

<<<<<<< HEAD
#endif
=======
#endif
>>>>>>> 46c3d65cfc5524f780aee1ffb9c986fdecb464e1
