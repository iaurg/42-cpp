#include "Data.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Data::Data(int n, char c, float f, double d)
    : _n(n)
    , _c(c)
    , _f(f)
    , _d(d)
{
}

Data::Data(const Data& src)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Data::~Data()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Data& Data::operator=(Data const& rhs)
{
    return *this;
}

std::ostream& operator<<(std::ostream& o, Data const& rhs)
{
    o << "Data(" << rhs.getN() << ", " << rhs.getC() << ", " << rhs.getF() << ", " << rhs.getD() << ")" << std::endl;
    return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

uintptr_t Data::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Data::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int Data::getN() const
{
    return _n;
}

char Data::getC() const
{
    return _c;
}

float Data::getF() const
{
    return _f;
}

double Data::getD() const
{
    return _d;
}

/* ************************************************************************** */
