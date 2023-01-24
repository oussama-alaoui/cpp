#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat bureaucrat("ash",11);
        Form form("formName", 10, 11);

        bureaucrat.signForm(form);
        

        std::cout << form << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}