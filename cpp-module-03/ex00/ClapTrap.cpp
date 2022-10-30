#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor called" << std::endl;
    this->_name = "Default";
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    _name = name;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    std::cout << "ClapTrap " << _name << " created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " destroyed" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap& ClapTrap::operator=(ClapTrap const& rhs)
{
    if (this != &rhs) {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

int ClapTrap::checkCanAct(void)
{
    if (_hitPoints <= 0) {
        std::cout << "ClapTrap " << _name << " is dead" << std::endl;
        return (0);
    }
    if (_energyPoints <= 0) {
        std::cout << "ClapTrap " << _name << " has no energy" << std::endl;
        return (0);
    }
    return 1;
}

void ClapTrap::attack(std::string const& target)
{
    if (checkCanAct()) {
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        setEP(_energyPoints - 1);
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (checkCanAct()) {
        std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
        setHP(getHP() - amount);
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (checkCanAct()) {
        std::cout << "ClapTrap " << _name << " is repaired by " << amount << " points!" << std::endl;
        setEP(_energyPoints - 1);
        setHP(getHP() + amount);
    }
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string ClapTrap::getName(void) const
{
    return _name;
}

unsigned int ClapTrap::getHP(void) const
{
    return _hitPoints;
}

unsigned int ClapTrap::getEP(void) const
{
    return _energyPoints;
}

unsigned int ClapTrap::getAD(void) const
{
    return _attackDamage;
}

void ClapTrap::setHP(unsigned int amount)
{
    _hitPoints = amount;
}

void ClapTrap::setEP(unsigned int amount)
{
    _energyPoints = amount;
}

void ClapTrap::setAD(unsigned int amount)
{
    _attackDamage = amount;
}

/* ************************************************************************** */
