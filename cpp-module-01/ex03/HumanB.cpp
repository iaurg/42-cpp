#include "HumanB.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

HumanB::HumanB()
{
}

HumanB::HumanB( const HumanB & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

HumanB::~HumanB()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

HumanB &				HumanB::operator=( HumanB const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, HumanB const & i )
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