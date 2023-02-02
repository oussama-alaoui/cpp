# include "span.hpp"

Span::Span(unsigned int N) : N(N) {}

Span::Span(Span const & src) : N(src.N), numbers(src.numbers) {}

Span & Span::operator=(Span const & rhs) {
    if (this != &rhs) {
        this->N = rhs.N;
        this->numbers = rhs.numbers;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int n) {
    if (this->numbers.size() == this->N)
        throw std::exception();
    this->numbers.push_back(n);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    if (this->numbers.size() + std::distance(begin, end) > this->N)
        throw std::exception();
    this->numbers.insert(this->numbers.end(), begin, end);
}

int Span::shortestSpan() {
    if (this->numbers.size() < 2)
        throw std::exception();
    std::vector<int> sorted = this->numbers;
    std::sort(sorted.begin(), sorted.end());
    int shortest = sorted[1] - sorted[0];
    for (unsigned int i = 2; i < sorted.size(); i++) {
        if (sorted[i] - sorted[i - 1] < shortest)
            shortest = sorted[i] - sorted[i - 1];
    }
    return shortest;
}

int Span::longestSpan() {
    if (this->numbers.size() < 2)
        throw std::exception();
    std::vector<int> sorted = this->numbers;
    std::sort(sorted.begin(), sorted.end());
    return sorted[sorted.size() - 1] - sorted[0];
}

void Span::print() {
    for (unsigned int i = 0; i < this->numbers.size(); i++) {
        std::cout << this->numbers[i] << " ";
    }
    std::cout << std::endl;
}