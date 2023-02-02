#include "convert.hpp"


int main(int ac, char **av) {
    try {
        if (ac != 2)
        {
            std::cout << "Error: invalid number of arguments" << std::endl;
            return 0;
        }
        ScalarConverter::convert(av[1]);
    }
    catch (std::exception &e) {
        std::cout << "Error: invalid input" << std::endl;
    }
}
