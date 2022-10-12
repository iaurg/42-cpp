#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

#define RESET "\033[0m"
#define RED "\033[31m" /* Red */
#define BLUE "\033[34m" /* Blue */
#define GREEN "\033[32m" /* Green */

class ClapTrap {

public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const& src);
    ~ClapTrap();

    ClapTrap& operator=(ClapTrap const& rhs);

    void attack(std::string const& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    int checkCanAct(void);

    std::string getName(void) const;
    unsigned int getHP(void) const;
    unsigned int getEP(void) const;
    unsigned int getAD(void) const;
    void setHP(unsigned int amount);
    void setEP(unsigned int amount);
    void setAD(unsigned int amount);
    void setName(std::string name);

protected:
    std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;
};

std::ostream& operator<<(std::ostream& o, ClapTrap const& i);

#endif /* ******************************************************** CLAPTRAP_H */
