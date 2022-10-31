#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <exception>
#include <iostream>
#include <string>
#include <vector>

class Span {

public:
    Span();
    Span(unsigned int n);
    Span(Span const& src);
    ~Span();

    Span& operator=(Span const& rhs);

    void addNumber(int n);
    int shortestSpan();
    int longestSpan();
    void fillVector(unsigned int n);

private:
    unsigned int _n;
    std::vector<int> _numbers;
};

#endif /* ************************************************************ SPAN_H */
