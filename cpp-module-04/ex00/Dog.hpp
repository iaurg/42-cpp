#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Dog : public Animal {

public:
    Dog();
    Dog(Dog const& src);
    virtual ~Dog();

    Dog& operator=(Dog const& rhs);
    virtual void makeSound(void) const;
};

std::ostream& operator<<(std::ostream& o, Dog const& i);

#endif /* ************************************************************* DOG_H */
