#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <cstdio>
#include <limits>
#include <cmath>

class ScalarConverter
{
    private:
        static int _int;
        static float _float;
        static double _double;
        static char _char;
    public:
        static void convert(const std::string& str);
        static bool isint(const std::string& str);
        static bool isfloat(const std::string& str);
        static bool ischar(const std::string& str);
        static bool isdouble(const std::string& str);
        static bool isnan(const std::string& str);
};

#endif