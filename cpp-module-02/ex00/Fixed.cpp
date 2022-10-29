#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
    : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
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

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

/* ************************************************************************** */
