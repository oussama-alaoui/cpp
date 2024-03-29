#include <iostream>
#include <fstream>
#include <string>

int main (int ac, char **av)
{
    if (ac < 4)
    {
        std::cout << "Program need : " << " <filename> <string1> <string2>" << std::endl;
    }
    else
    {
        std:: ifstream file;
        std:: string file_name;
        std:: string read;
        std:: string src;
        std:: string dest;
        std::size_t found;

        file_name = av[1];
        src = av[2];
        dest = av[3];

        file.open(file_name);
        if (file.is_open())
        {
            std::ofstream outfile (file_name+std::string(".replace"));
            while (file)
            {
                std::getline(file, read);
                while ((found = read.find(src)) != std::string::npos)
                {
                    read.erase(found, src.length());
                    read.insert(found, dest);
                }
                outfile << read << std::endl;
            }
            outfile.close();
        }
        file.close();
    }
    return 0;
}