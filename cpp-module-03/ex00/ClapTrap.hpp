#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

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

private:
    std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;
};

#endif /* ******************************************************** CLAPTRAP_H */
