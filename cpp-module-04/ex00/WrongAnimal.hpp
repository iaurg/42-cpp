#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {

public:
    WrongAnimal();
    WrongAnimal(WrongAnimal const& src);
    ~WrongAnimal();

    WrongAnimal& operator=(WrongAnimal const& rhs);
    const std::string getType(void) const;
    void setType(std::string type);
    void makeSound(void) const;

private:
protected:
    std::string type;
};

#endif /* ********************************************************** WRONGANIMAL_H */
