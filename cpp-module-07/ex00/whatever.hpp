#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename A, typename B>
void swap(A& a, B& b)
{
    A tmp = a;
    a = b;
    b = tmp;
}

template <typename A, typename B>
A& min(A& a, B& b)
{
    return (a < b ? a : b);
}

template <typename A, typename B>
A& max(A& a, B& b)
{
    return (a > b ? a : b);
}

#endif /* ************************************************************ WHATEVER_H */
