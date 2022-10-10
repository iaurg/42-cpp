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
    void (Harl::*debug)() = &Harl::_debug;
    void (Harl::*info)() = &Harl::_info;
    void (Harl::*warning)() = &Harl::_warning;
    void (Harl::*error)() = &Harl::_error;

    void (Harl::*complain[4])() = { debug, info, warning, error };

    std::string levels[4] = { "debug", "info", "warning", "error" };

    for (int i = 0; i < 4; i++) {
        if (level == levels[i])
            (this->*complain[i])();
    }
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
