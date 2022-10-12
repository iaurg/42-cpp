#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include "Brain.hpp"
#include <iostream>
#include <string>

class AAnimal {

public:
    AAnimal();
    AAnimal(AAnimal const& src);
    virtual ~AAnimal();

    AAnimal& operator=(AAnimal const& rhs);
    const std::string getType(void) const;
    void setType(std::string type);
    virtual void makeSound(void) const = 0;
    virtual Brain* getBrain(void) const = 0;

protected:
    std::string type;
};

std::ostream& operator<<(std::ostream& o, AAnimal const& i);

#endif /* ********************************************************** AANIMAL_H */
