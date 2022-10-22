#include "Converter.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Converter::Converter(std::string str)
    : _input(str)
{
}

Converter::Converter(const Converter& src)
{
    *this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Converter::~Converter()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Converter& Converter::operator=(Converter const& rhs)
{
    if (this != &rhs) {
        this->_input = rhs._input;
    }
    return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string Converter::getInput() const
{
    return this->_input;
}

std::string Converter::convertToChar(void)
{
    std::string str = this->getInput();

    return str;
}

int Converter::convertToInt(void)
{
    std::string str = this->getInput();

    return 42;
}

float Converter::convertToFloat(void)
{
    std::string str = this->getInput();

    return 42.0;
}

double Converter::convertToDouble(void)
{
    std::string str = this->getInput();

    return 42.0;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
