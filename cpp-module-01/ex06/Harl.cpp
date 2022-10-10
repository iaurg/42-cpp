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

static int getLevel(std::string level)
{
    if (level == "DEBUG")
        return 0;
    if (level == "INFO")
        return 1;
    if (level == "WARNING")
        return 2;
    if (level == "ERROR")
        return 3;
    return -1;
}

void Harl::complain(std::string level)
{
    void (Harl::*debug)() = &Harl::_debug;
    void (Harl::*info)() = &Harl::_info;
    void (Harl::*warning)() = &Harl::_warning;
    void (Harl::*error)() = &Harl::_error;

    void (Harl::*complain[4])() = { debug, info, warning, error };

    switch (getLevel(level)) {
    case 0:
        (this->*complain[0])();
        break;
    case 1:
        (this->*complain[1])();
        break;
    case 2:
        (this->*complain[2])();
        break;
    case 3:
        (this->*complain[3])();
        break;
    default:
        std::cout << "Probably complaining about insignificant problem" << std::endl;
        break;
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

/* ************************************************************************** */
