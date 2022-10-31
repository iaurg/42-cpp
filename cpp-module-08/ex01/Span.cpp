#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span()
{
}

Span::Span(unsigned int n)
    : _n(n)
{
}

Span::Span(const Span& src)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span& Span::operator=(Span const& rhs)
{
    return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Span::addNumber(int n)
{
    if (_numbers.size() == _n)
        throw std::runtime_error("Container is full");
    _numbers.push_back(n);
}

int Span::shortestSpan()
{
    if (_numbers.size() < 2)
        throw std::runtime_error("Not enough numbers to calculate shortest span");
    std::vector<int> tmp = _numbers;
    std::sort(tmp.begin(), tmp.end());
    int min = tmp[1] - tmp[0];
    for (size_t i = 2; i < tmp.size(); i++) {
        if (tmp[i] - tmp[i - 1] < min)
            min = tmp[i] - tmp[i - 1];
    }
    return min;
}

int Span::longestSpan()
{
    if (_numbers.size() < 2)
        throw std::runtime_error("Not enough numbers to calculate longest span");
    std::vector<int> tmp = _numbers;
    std::sort(tmp.begin(), tmp.end());
    return tmp[tmp.size() - 1] - tmp[0];
}

void Span::fillVector(unsigned int n)
{
    for (unsigned int i = 0; i < n; i++) {
        _numbers.push_back(i);
    }
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
