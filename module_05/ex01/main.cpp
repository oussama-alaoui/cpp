#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat bureaucrat("brc",11);
        Form form("fRM", 10, 11);

        bureaucrat.signForm(form);
    
        std::cout << form << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}