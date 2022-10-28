#include "Array.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Array::Array()
{
}

Array::Array(const Array& src)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Array::~Array()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Array& Array::operator=(Array const& rhs)
{
    // if ( this != &rhs )
    //{
    // this->_value = rhs.getValue();
    //}
    return *this;
}

std::ostream& operator<<(std::ostream& o, Array const& i)
{
    // o << "Value = " << i.getValue();
    return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
