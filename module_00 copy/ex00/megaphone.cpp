#include <iostream>
#include <string>

int main (int ac, char **av)
{
    int i;
    int j;

    i = 1;
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (i < ac)
    {
        std::string str(av[i]);
        j = 0;
        while (str[j])
        {
            char c = toupper(str[j]);
            std::cout << c;
            j++;
        }
        i++;
    }
    std::cout << std::endl;
    return (0);
}