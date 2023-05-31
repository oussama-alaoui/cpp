#include "include.hpp"

void search_and_print(std::string date, std::string value, std::map<std::string, std::string> data)
{
    std::map<std::string, std::string>::iterator it;
    it = data.find(date);
    if (it != data.end())
    {
        std::cout << "Date: " << date << " | Value: " << value << " | Average: " << it->second << std::endl;
    }
    else
        std::cout << "Error: date not found => " << date << std::endl;
}

int parser(std::string date, std::string value, std::map<std::string, std::string> data)
{
    if (valide_date(date))
    {
        if(ft_isdigit(value) && stof(value) > 0 && stof(value) < 1000)
        {
            search_and_print(date, value, data);
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
        if (date.size() == 0 || value.size() == 0 || value.size() > 4)
        {
            std::cout << "Error: line: " << line << std::endl;
        }
        else
        {
            parser(date, value, data);
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