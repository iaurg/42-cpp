#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap()
    : ClapTrap()
{
    std::cout << RED << "[ScavTrap] " << RESET << "default constructor called" << std::endl;
    this->_name = "Default";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
    : ClapTrap(name)
{
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << RED << "[ScavTrap] " << RESET << this->_name << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src)
{
    std::cout << RED << "[ScavTrap] " << RESET "copy constructor called" << std::endl;
    *this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
    std::cout << RED << "[ScavTrap] " << RESET << this->getName() << " destroyed" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap& ScavTrap::operator=(ScavTrap const& rhs)
{
    if (this != &rhs) {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& o, ScavTrap const& i)
{
    // o << "Value = " << i.getValue();
    return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void ScavTrap::attack(std::string const& target)
{
    if (this->checkCanAct()) {
        std::cout << RED << "[ScavTrap] " << RESET
                  << this->getName()
                  << " attacks " << target << ", causing "
                  << this->getAD() << " points of damage!"
                  << std::endl;
        this->setEP(this->getEP() - 10);
    }
}

void ScavTrap::guardGate(void)
{
    std::cout << RED << "[ScavTrap] " << RESET
              << this->getName() << " has entered in Gate keeper mode"
              << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
