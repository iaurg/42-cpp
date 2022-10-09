#include "Harl.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Harl::Harl()
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Harl::~Harl()
{
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Harl::complain(std::string level)
{
}

void Harl::_debug(void)
{
    std::cout << "DEBUG: A debug error" << std::endl;
}

void Harl::_info(void)
{
    std::cout << "INFO: An info error" << std::endl;
}

void Harl::_warning(void)
{
    std::cout << "WARNING: A warning error" << std::endl;
}

void Harl::_error(void)
{
    std::cout << "ERROR: An error" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
