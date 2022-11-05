#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T>
class Array {
    class OutOfRange : public std::exception {
    public:
        virtual const char* what() const throw();
    };

public:
    Array();
    Array(unsigned int n);
    Array(Array const& src);
    ~Array();

    T& operator[](unsigned int n);
    Array<T>& operator=(Array const& rhs);
    int size() const;

private:
    T* _array;
    unsigned int _size;
};

template <typename T>
std::ostream& operator<<(std::ostream& out, Array<T> const& rhs);

#include "Array.tpp"

#endif /* *********************************************************** ARRAY_H */
