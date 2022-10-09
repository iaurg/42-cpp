#include "Weapon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Weapon::Weapon(std::string type)
    : _type(type)
{
}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Weapon::~Weapon()
{
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string& Weapon::getType(void) const
{
    return this->_type;
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}

/* ************************************************************************** */
