#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {

public:
    Weapon();
    Weapon(Weapon const& src);
    ~Weapon();
    const std::string& getType(void) const;
    void setType(std::string type);
    Weapon& operator=(Weapon const& rhs);

private:
    std::string _type;
};

#endif /* ********************************************************** WEAPON_H */
