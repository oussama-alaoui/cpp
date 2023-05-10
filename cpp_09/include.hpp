#ifndef INCLUDE_HPP
#define INCLUDE_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <fstream>
#include <sstream>
#include <map>

std::map<int, std::string> split_by_dash(const std::string& input_str);
int valide_date(std::string str);
std::map<std::string , std::string> read_data_file();
int ft_isdigit(std::string value);
#endif