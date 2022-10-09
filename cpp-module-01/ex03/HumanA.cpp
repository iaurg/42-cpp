#include "HumanA.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

HumanA::HumanA()
{
}

HumanA::HumanA( const HumanA & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

HumanA::~HumanA()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

HumanA &				HumanA::operator=( HumanA const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, HumanA const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */