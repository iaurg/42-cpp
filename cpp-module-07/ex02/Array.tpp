#include "Array.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

template <typename T>
Array<T>::Array()
{
    _array = new T[0];
    _size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    _array = new T[n];
    _size = n;
}

template <typename T>
Array<T>::Array(const Array& src)
{
    *this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

template <typename T>
Array<T>::~Array()
{
    if (_array)
        delete[] _array;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

template <typename T>
Array<T>& Array<T>::operator=(Array const& rhs)
{
    if (this != &rhs) {
        _size = rhs._size;
        _array = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
            _array[i] = rhs._array[i];
    }
    return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int n)
{
    if (n >= this->size() || n < 0)
        throw Array::OutOfRange();
    return _array[n];
}

template <typename T>
std::ostream& operator<<(std::ostream& out, Array<T> const& rhs)
{
    for (unsigned int i = 0; i < rhs.size(); i++)
        out << rhs[i] << " " << std::endl;
    return out;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

template <typename T>
int Array<T>::size() const
{
    return this->_size;
}

template <typename T>
const char* Array<T>::OutOfRange::what() const throw()
{
    return "Error: Out of range";
}

/* ************************************************************************** */
