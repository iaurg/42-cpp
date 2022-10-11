#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
    : _value(0)
{
}

Fixed::Fixed(const int value)
{
    this->_value = value << this->_fractionalBits;
}

Fixed::Fixed(const float value)
{
    this->_value = roundf(value * (1 << this->_fractionalBits));
}

Fixed::Fixed(const Fixed& src)
{
    *this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed& Fixed::operator=(Fixed const& rhs)
{
    if (this != &rhs) {
        this->_value = rhs.getRawBits();
    }
    return *this;
}

Fixed Fixed::operator+(Fixed const& rhs) const
{
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const& rhs) const
{
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const& rhs) const
{
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const& rhs) const
{
    return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed& Fixed::operator++()
{
    this->_value++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->_value++;
    return tmp;
}

Fixed& Fixed::operator--()
{
    this->_value--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    this->_value--;
    return tmp;
}

bool Fixed::operator>(Fixed const& rhs) const
{
    return this->_value > rhs.getRawBits();
}

bool Fixed::operator<(Fixed const& rhs) const
{
    return this->_value < rhs.getRawBits();
}

bool Fixed::operator>=(Fixed const& rhs) const
{
    return this->_value >= rhs.getRawBits();
}

bool Fixed::operator<=(Fixed const& rhs) const
{
    return this->_value <= rhs.getRawBits();
}

bool Fixed::operator==(Fixed const& rhs) const
{
    return this->_value == rhs.getRawBits();
}

bool Fixed::operator!=(Fixed const& rhs) const
{
    return this->_value != rhs.getRawBits();
}

std::ostream& operator<<(std::ostream& out, Fixed const& rhs)
{
    out << rhs.toFloat();
    return out;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

float Fixed::toFloat(void) const
{
    return (float)this->_value / (1 << this->_fractionalBits);
}

int Fixed::toInt(void) const
{
    return this->_value >> this->_fractionalBits;
}

Fixed const& Fixed::min(Fixed const& a, Fixed const& b)
{
    return a < b ? a : b;
}

Fixed const& Fixed::max(Fixed const& a, Fixed const& b)
{
    return a > b ? a : b;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    return a < b ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    return a > b ? a : b;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int Fixed::getRawBits(void) const
{
    return this->_value;
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

/* ************************************************************************** */
