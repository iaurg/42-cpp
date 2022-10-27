#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename T, int SIZE>
class MyArray {
private:
    T _array[SIZE];

public:
    int getSize() const
    {
        return SIZE;
    }

    T& operator[](int index)
    {
        return _array[index];
    }
};

#endif /* ************************************************************ WHATEVER_H */
