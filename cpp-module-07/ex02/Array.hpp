#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

class Array {

public:
    Array();
    Array(Array const& src);
    ~Array();

    Array& operator=(Array const& rhs);
    int size() const;

private:
};

std::ostream& operator<<(std::ostream& o, Array const& i);

#endif /* *********************************************************** ARRAY_H */
