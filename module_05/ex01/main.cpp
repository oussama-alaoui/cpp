#include "Bureaucrat.hpp"

int main()
{
    try {
<<<<<<< HEAD
        Bureaucrat bureaucrat("brc",11);
        Form form("fRM", 10, 11);

        bureaucrat.signForm(form);
    
=======
        Bureaucrat bureaucrat("ash",11);
        Form form("formName", 10, 11);

        bureaucrat.signForm(form);
        

>>>>>>> 46c3d65cfc5524f780aee1ffb9c986fdecb464e1
        std::cout << form << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
<<<<<<< HEAD
=======

>>>>>>> 46c3d65cfc5524f780aee1ffb9c986fdecb464e1
    return 0;
}