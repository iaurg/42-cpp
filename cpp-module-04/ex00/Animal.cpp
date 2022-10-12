#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
{
    std::cout << "[Animal] default constructor called" << std::endl;
    this->type = "Animal";
}

Animal::Animal(const Animal& src)
{
    std::cout << "[Animal] copy constructor called" << std::endl;
    *this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
    std::cout << "[Animal] " << this->type << " destroyed" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal& Animal::operator=(Animal const& rhs)
{
    std::cout << "[Animal] assignation operator called" << std::endl;
    if (this != &rhs) {
        this->type = rhs.getType();
    }
    return *this;
}

std::ostream& operator<<(std::ostream& o, Animal const& i)
{
    o << "Animal of = " << i.getType();
    return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Animal::makeSound() const
{
    std::cout << "Spooklk" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string Animal::getType() const
{
    return this->type;
}

void Animal::setType(std::string type)
{
    this->type = type;
}

/* ************************************************************************** */
