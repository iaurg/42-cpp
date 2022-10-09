#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA {

public:
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();
    void attack(void) const;

private:
    std::string _name;
    Weapon& _weapon;
};

#endif /* ********************************************************** HUMANA_H */
