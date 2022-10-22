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
    DiamondTrap& operator=(DiamondTrap const& rhs);

private:
    std::string _name;
};

#endif /* ***************************************************** DIAMONDTRAP_H */
