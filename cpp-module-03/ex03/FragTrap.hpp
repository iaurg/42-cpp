#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : virtual public ClapTrap {

public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap const& src);
    ~FragTrap();
    void highFivesGuys(void);
    FragTrap& operator=(FragTrap const& rhs);

private:
};

std::ostream& operator<<(std::ostream& o, FragTrap const& i);

#endif /* ******************************************************** FRAGTRAP_H */
