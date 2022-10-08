#include "Zombie.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

static void printOut(std::string str)
{
    std::cout << str << std::endl;
}

Zombie::Zombie(std::string name)
    : _name(name)
{
}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Zombie::~Zombie()
{
    printOut(this->_name + ": I've died...");
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Zombie::announce(void)
{
    printOut(this->_name + ": BraiiiiiiinnnzzzZ...");
}

/* ************************************************************************** */
