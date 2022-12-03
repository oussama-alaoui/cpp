#include <iostream>
#include <fstream>
#include <string>

int main (int ac, char **av)
{
    if (ac < 4)
    {
        std::cout << "khasak dir 3 dyal arg" << std::endl;
    }
    else
    {
        std:: ifstream file;
        std:: string file_name;
        std:: string read;
        std:: string src;
        std:: string dest;

        file_name = av[1];
        src = av[2];
        dest = av[3];

        file.open(file_name);
        if (file.is_open())
        {
            std::getline(file, read);
        }
        std::size_t found = read.find("dd cc");
        std::cout << read << std::endl;
        read.erase(found, (read.length()+found));
    }
        
    return 0;
}