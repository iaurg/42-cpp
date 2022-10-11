#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
    : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = value << this->_fractionalBits;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(value * (1 << this->_fractionalBits));
}

Fixed::Fixed(const Fixed& src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed& Fixed::operator=(Fixed const& rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs) {
        this->_value = rhs.getRawBits();
    }
    return *this;
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
