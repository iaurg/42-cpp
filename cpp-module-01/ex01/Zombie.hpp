#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

public:
    Zombie();
    ~Zombie();
    Zombie(std::string name);
    void announce(void);
    void setName(std::string name);

private:
    std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif /* ********************************************************** ZOMBIE_H */
