#ifndef Form_HPP
#define Form_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private:
        std::string const _name;
        bool _signed;
        int const _gradeToSign;
        int const _gradeToExecute;

    public:
        Form();
        Form(const std::string &name, int gradeToSign, int gradeToExecute);
        Form(Form const&);
        Form& operator=(Form const&);
        ~Form();

        std::string getName() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        bool getSigned() const;
        void beSigned(const Bureaucrat &bureaucrat);

        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream&, Form const&);

#endif