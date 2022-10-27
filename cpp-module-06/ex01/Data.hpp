#ifndef DATA_HPP
#define DATA_HPP

#include <inttypes.h>
#include <iostream>
#include <string>

class Data {

public:
    Data(int n, char c, float f, double d);
    Data(Data const& src);
    ~Data();

    Data& operator=(Data const& rhs);

    uintptr_t serialize(Data* ptr);
    Data* deserialize(uintptr_t raw);

    int getN() const;
    char getC() const;
    float getF() const;
    double getD() const;

private:
    int _n;
    char _c;
    float _f;
    double _d;
};

std::ostream& operator<<(std::ostream& o, Data const& rhs);

#endif /* ************************************************************ DATA_H */
