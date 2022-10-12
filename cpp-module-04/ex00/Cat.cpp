#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
    std::cout << "[Cat] default constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat& src)
{
    std::cout << "[Cat] copy constructor called" << std::endl;
    *this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
    std::cout << "[Cat] " << this->type << " destroyed" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat& Cat::operator=(Cat const& rhs)
{
    if (this != &rhs) {
        this->type = rhs.getType();
    }
    return *this;
}

std::ostream& operator<<(std::ostream& o, Cat const& i)
{
    // o << "Value = " << i.getValue();
    return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
