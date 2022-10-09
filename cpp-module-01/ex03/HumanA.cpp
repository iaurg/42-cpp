#include "HumanA.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

HumanA::HumanA(std::string name, Weapon& weapon)
    : _name(name)
    , _weapon(weapon)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

HumanA::~HumanA()
{
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void HumanA::attack(void) const
{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

/* ************************************************************************** */
