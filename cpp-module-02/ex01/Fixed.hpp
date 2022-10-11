#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>
#include <string>

class Fixed {

public:
    Fixed();
    Fixed(const int value);
    Fixed(const float value);
    Fixed(Fixed const& src);
    ~Fixed();

    Fixed& operator=(Fixed const& rhs);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;

private:
    int _value;
    static const int _fractionalBits = 8;
};

std::ostream& operator<<(std::ostream& out, Fixed const& rhs);

#endif /* *********************************************************** FIXED_H */
