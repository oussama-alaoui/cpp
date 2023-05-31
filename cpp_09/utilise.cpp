#include "include.hpp"


std::map<int, std::string> split_by_dash(const std::string& input_str) {
  std::map<int, std::string> result;
  int index = 0;
  std::string::size_type pos = 0;
  std::string remaining_str = input_str;
  while ((pos = remaining_str.find("-")) != std::string::npos) {
    result[index++] = remaining_str.substr(0, pos);
    remaining_str = remaining_str.substr(pos + 1);
  }
  result[index] = remaining_str;
  return result;
}

std::map<std::string , std::string> read_data_file()
{
    std::ifstream data_file("data.csv");
    std::map<std::string, std::string> data;
    if (!data_file.is_open()) {
        std::cerr << "Error: cannot open file: data.csv" << std::endl;
        return data;
    }
    std::string date;
    std::string value;
    while (data_file.good()) 
    {
        std::getline(data_file, date, ',');
        std::getline(data_file, value, '\n');
        data[date] = value;
    }
    return data;
}

int valide_date(std::string str)
{
    std::map<int, std::string> date;
    date = split_by_dash(str);
    if (date.size() == 3)
    {
        if (date[0].size() == 4 && date[1].size() == 2 && date[2].size() == 3)
        {
            if ( std::stoi(date[1]) > 0 && std::stoi(date[1]) < 13 && std::stoi(date[2]) > 0 && std::stoi(date[2]) < 32)
                return 1;
        }
    }
    return 0;
}

int ft_isdigit(std::string value)
{
    int i = 0;
    while (value[i] || value[i] == '\n')
    {
        if (value[i] == '.' || value[i] == ',' || (value[i] == ' ' && i == 0))
            i++;
        if (!std::isdigit(value[i]))
            return 0;
        i++;
    }
    return 1;
}
