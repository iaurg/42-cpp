#ifndef WrongCAT_HPP
#define WrongCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

class WrongCat : public WrongAnimal {

public:
    WrongCat();
    WrongCat(WrongCat const& src);
    virtual ~WrongCat();

    WrongCat& operator=(WrongCat const& rhs);
    virtual void makeSound(void) const;

private:
};

#endif /* ************************************************************* WrongCAT_H */
