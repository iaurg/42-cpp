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

static float toTreatableFloat(std::string& str)
{
    float result = 0;
    result = atof(str.c_str());
    return result;
}

void Converter::convertToChar(void)
{
    std::string str = this->getInput();

    float f = toTreatableFloat(str);
    int i = static_cast<int>(f);

    if (f < 0 || f > 127 || std::isnan(f) || std::isinf(f)) {
        std::cout << "char: impossible" << std::endl;
    } else if (f < 32 || f > 126) {
        std::cout << "char: Non displayable" << std::endl;
    } else {
        std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
    }
}

void Converter::convertToInt(void)
{
    std::string str = this->getInput();

    float f = toTreatableFloat(str);

    if (f < INT_MIN || f > INT_MAX || std::isnan(f) || std::isinf(f)) {
        std::cout << "int: impossible" << std::endl;
    } else {
        std::cout << "int: " << static_cast<int>(f) << std::endl;
    }
}

void Converter::convertToFloat(void)
{
    std::string str = this->getInput();

    float f = toTreatableFloat(str);

    if (f < -FLT_MAX || f > FLT_MAX) {
        std::cout << "float: impossible" << std::endl;
    } else {
        std::cout << "float: " << std::fixed << std::setprecision(1) << f
                  << "f" << std::endl;
    }
}

void Converter::convertToDouble(void)
{
    std::string str = this->getInput();

    float f = toTreatableFloat(str);

    if (f < -DBL_MAX || f > DBL_MAX) {
        std::cout << "double: impossible" << std::endl;
    } else {
        std::cout << "double: " << std::fixed << std::setprecision(1) << f
                  << std::endl;
    }
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Converter::getInput() const
{
    return this->_input;
}

/* ************************************************************************** */
