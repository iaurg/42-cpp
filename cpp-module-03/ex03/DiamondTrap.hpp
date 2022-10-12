#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <string>

class DiamondTrap : public FragTrap, public ScavTrap {

public:
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(DiamondTrap const& src);
    ~DiamondTrap();
    void whoAmI(void);
    void attack(std::string const& target);
    DiamondTrap& operator=(DiamondTrap const& rhs);

private:
    std::string _name;
};

std::ostream& operator<<(std::ostream& o, DiamondTrap const& i);

#endif /* ***************************************************** DIAMONDTRAP_H */
