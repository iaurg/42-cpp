#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Brain.hpp"
#include <iostream>
#include <string>

class Animal {

public:
    Animal();
    Animal(Animal const& src);
    virtual ~Animal();

    Animal& operator=(Animal const& rhs);
    const std::string getType(void) const;
    void setType(std::string type);
    virtual void makeSound(void) const;
    Brain& getBrain(void) const;

protected:
    std::string type;
    Brain* brain;
};

std::ostream& operator<<(std::ostream& o, Animal const& i);

#endif /* ********************************************************** ANIMAL_H */
