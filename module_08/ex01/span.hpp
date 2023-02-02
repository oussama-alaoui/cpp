#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <iostream>
#include <stdexcept>

class Span {
    public:
        Span(unsigned int N);
        Span(Span const & src);
        Span & operator=(Span const & rhs);
        ~Span();
        void addNumber(int n);
        void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int shortestSpan();
        int longestSpan();
        void print();
    private:
        unsigned int N;
        std::vector<int> numbers;
};

#endif