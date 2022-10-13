#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap()
{
    std::cout << CYAN << "[DiamondTrap]" << RESET << " default constructor called" << std::endl;
    this->_name = "Default Diamond";
    ClapTrap::_name = this->_name + "_clap_name";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name)
{
    std::cout << CYAN << "[DiamondTrap]" << RESET << " " << name << " created" << std::endl;
    this->_name = name;
    ClapTrap::_name = this->_name + "_clap_name";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src)
{
    std::cout << CYAN << "[DiamondTrap]" << RESET << " copy constructor called" << std::endl;
    *this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap()
{
    std::cout << CYAN << "[DiamondTrap]" << RESET << " " << this->getName() << " destroyed" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

DiamondTrap& DiamondTrap::operator=(DiamondTrap const& rhs)
{
    if (this != &rhs) {
        this->_name = rhs._name;
        ClapTrap::_name = this->_name + "_clap_name";
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void DiamondTrap::whoAmI(void)
{
    std::cout << CYAN << "[DiamondTrap]" << RESET << " " << this->_name << " is " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(std::string const& target)
{
    ScavTrap::attack(target);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
