#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>

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

private:
    unsigned int _n;
};

#endif /* ************************************************************ SPAN_H */
