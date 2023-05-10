#include "include.hpp"

int parser(std::string date, std::string value)
{
    if (valide_date(date))
    {
        if(ft_isdigit(value) && stoi(value) > 0 && stoi(value) < 1000)
        {
            std::cout << date << " => " << value << std::endl;
        }
        else
            std::cout << "Error: bad input => " << stoi(value) << std::endl;
    }
    else
        std::cout << "Error: bad input1 => " << date << std::endl;
    return 0;
}

void callculate(std::map<std::string, std::string> data, std::string file)
{
    (void)data;
    std::string line;
    std::ifstream data_file(file);
    std::string date;
    std::string value;
    if (!data_file.is_open())
    {
        std::cerr << "Error: cannot open file: " << file << std::endl;
        return;
    }
    getline(data_file, line);
    while (data_file.good())
    {
        getline(data_file, line);
        if (line.find('|') == std::string::npos)
            std::cout << "Error: Invalid line: " << std::endl;
        date = line.substr(0, line.find('|'));
        value = line.substr(line.find('|') + 1, line.size());
        if (date.size() == 0 || value.size() == 0)
            std::cout << "Error: Invalid line: " << std::endl;
        else
        {
            parser(date, value);
        }
    }
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
        return 0;
    }
    std::map<std::string, std::string> data = read_data_file();
    callculate(data, argv[1]);
    return 0;
}