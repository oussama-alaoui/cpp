#ifndef Form_H
#define Form_H

#include <iostream>
#include <string>

class Bureaucrat;

class Form {
    public:
        Form(std::string name, int gradeToSign, int gradeToExecute);
        Form(Form const&);
        Form& operator=(Form const&);
        ~Form();

        std::string getName() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        bool getSigned() const;
        void beSigned(Bureaucrat&);

        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

    private:
        Form();
        std::string _name;
        bool _signed;
        int _gradeToSign;
        int _gradeToExecute;
};

std::ostream& operator<<(std::ostream&, Form const&);

#endif
