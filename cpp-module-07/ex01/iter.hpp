#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename A, typename B>
void iter(A* array, B size, void (*f)(A const&))
{
    for (B i = 0; i < size; i++)
        f(array[i]);
}

#endif /* ************************************************************ ITER_H */
