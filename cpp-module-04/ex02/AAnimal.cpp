#include "AAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AAnimal::AAnimal()
{
    std::cout << "[Animal] default constructor called" << std::endl;
    this->type = "Animal";
}

AAnimal::AAnimal(const AAnimal& src)
{
    std::cout << "[Animal] copy constructor called" << std::endl;
    *this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AAnimal::~AAnimal()
{
    std::cout << "[Animal] " << this->type << " destroyed" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AAnimal& AAnimal::operator=(AAnimal const& rhs)
{
    std::cout << "[Animal] assignation operator called" << std::endl;
    if (this != &rhs) {
        this->type = rhs.getType();
    }
    return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string AAnimal::getType() const
{
    return this->type;
}

void AAnimal::setType(std::string type)
{
    this->type = type;
}

/* ************************************************************************** */
