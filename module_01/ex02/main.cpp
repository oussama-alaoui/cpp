#include <iostream>
#include <string>

int main ()
{
    std::string A = "HI THIS IS BRAIN";
    std::string &stringREF = A;
    std::string *stringPTR = &A;

    // print memory address
    std::cout << &A << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    //print value
    std::cout << A << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}