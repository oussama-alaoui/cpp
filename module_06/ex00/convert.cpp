#include "convert.hpp"

int ScalarConverter::_int = 0;
float ScalarConverter::_float = 0;
double ScalarConverter::_double = 0;
char ScalarConverter::_char = 0;

bool ScalarConverter::isint(const std::string& str) {
    int i = 0;
    if (str[0] == '-' || str[0] == '+')
        i++;
    while (str[i]) {
        if (!isdigit(str[i]))
            return 0;
        i++;
    }
    return 1;
}

bool ScalarConverter::ischar(const std::string& str) {
    if (str.length() == 1 && isprint(str[0]))
        return 1;
    return 0;
}

bool ScalarConverter::isfloat(const std::string& str) {
    int i = 0;
    int dot = 0;
    if (str[0] == '-' || str[0] == '+')
        i++;
    while (str[i]) {
        if (str[i] == '.') {
            if (dot == 1)
                return 0;
            dot = 1;
        }
        else if (!isdigit(str[i]))
        {
            if ((str[i] == 'f' || str[i] == 'F') && str[i + 1] == '\0')
                return 1;
            else
                return 0;
        }
        i++;
    }
    return 1;
}

bool ScalarConverter::isdouble(const std::string& str) {
    int i = 0;
    int dot = 0;
    if (str[0] == '-' || str[0] == '+')
        i++;
    while (str[i]) {
        if (str[i] == '.') {
            if (dot == 1)
                return 0;
            dot = 1;
        }
        else if (!isdigit(str[i]))
            return 0;
        i++;
    }
    return 1;
}

bool ScalarConverter::isnan(const std::string& str) {
    if (str == "nan" || str == "nanf" || str == "-inf" || str == "+inf")
        return 1;
    return 0;
}

void ScalarConverter::convert(const std::string& str) {
    if (isint(str)) {
        ScalarConverter::_int = std::stoi(str);
        _float = static_cast<float>(_int);
        _double = static_cast<double>(_int);
        _char = static_cast<char>(_int);
    }
    else if (isfloat(str)) {
        _float = std::stof(str);
        _int = static_cast<int>(_float);
        _double = static_cast<double>(_float);
        _char = static_cast<char>(_float);
    }
    else if (isdouble(str)) {
        _double = std::stod(str);
        _int = static_cast<int>(_double);
        _float = static_cast<float>(_double);
        _char = static_cast<char>(_double);
    }
    else if (ischar(str)) {
        _char = str[0];
        _int = static_cast<int>(_char);
        _float = static_cast<float>(_char);
        _double = static_cast<double>(_char);
    }
    else if (isnan(str)) {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
        return;
    }
    else {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
        return;
    }
    if (isprint(_char))
        std::cout << "char: '" << _char << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << _int << std::endl;
    if ( _int == _float)
        std::cout << "float: " << _float << ".0f" << std::endl;
    else
        std::cout << "float: " << _float << "f" << std::endl;
    if (_int == _double)
        std::cout << "double: " << _double << ".0" << std::endl;
    else
        std::cout << "double: " << _double << std::endl;
}
