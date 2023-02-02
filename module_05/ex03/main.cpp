#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int  lek()
{
    Intern intern;
    Form* form;

    form = intern.makeForm("Shrubbery Creation", "Bender");
    delete form;
    form = intern.makeForm("Robotomy Request", "Bender");
    delete form; 
    form = intern.makeForm("Presidential Pardon", "Bender");
    delete form; 
    form = intern.makeForm("Invalid Form", "Bender");
    return EXIT_SUCCESS;
}
int main( void )
{
    try
    {
        lek();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    // {
    //     system("leaks Bureaucrat03");
    // }
}