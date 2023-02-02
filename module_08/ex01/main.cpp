# include "span.hpp"


int main() {
    Span sp = Span(20);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    try{
        std::vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(20);
        v.push_back(4);
        v.push_back(5);
        v.push_back(6);
        sp.addNumber(v.begin(), v.end());
    } catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    sp.print();

    return 0;
}