#include "HumanB.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

HumanB::HumanB(std::string name)
    : _name(name)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

HumanB::~HumanB()
{
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void HumanB::attack(void) const
{
    std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}

/* ************************************************************************** */
