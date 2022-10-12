#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Cat : public Animal {

public:
    Cat();
    Cat(Cat const& src);
    virtual ~Cat();

    Cat& operator=(Cat const& rhs);
    virtual void makeSound(void) const;
    virtual Brain* getBrain(void) const;

private:
    Brain* _brain;
};

std::ostream& operator<<(std::ostream& o, Cat const& i);

#endif /* ************************************************************* CAT_H */
