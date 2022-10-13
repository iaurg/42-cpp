#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
    std::cout << "[Dog] default constructor called" << std::endl;
    this->type = "Dog";

    this->_brain = new Brain();
}

Dog::Dog(const Dog& src)
{
    std::cout << "[Dog] copy constructor called" << std::endl;
    *this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
    std::cout << "[Dog] " << this->type << " destroyed" << std::endl;
    delete this->_brain;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog& Dog::operator=(Dog const& rhs)
{

    if (this != &rhs) {
        this->type = rhs.getType();
    }
    return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}

Brain* Dog::getBrain() const
{
    return this->_brain;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
