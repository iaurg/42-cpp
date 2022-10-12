#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat()
{
    std::cout << "[WrongCat] default constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& src)
{
    std::cout << "[WrongCat] copy constructor called" << std::endl;
    *this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
    std::cout << "[WrongCat] " << this->type << " destroyed" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat& WrongCat::operator=(WrongCat const& rhs)
{
    if (this != &rhs) {
        this->type = rhs.getType();
    }
    return *this;
}

std::ostream& operator<<(std::ostream& o, WrongCat const& i)
{
    // o << "Value = " << i.getValue();
    return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void WrongCat::makeSound() const
{
    std::cout << "Meowoof" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
