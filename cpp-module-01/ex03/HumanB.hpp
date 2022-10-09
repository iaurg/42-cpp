#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>

class HumanB
{

	public:

		HumanB();
		HumanB( HumanB const & src );
		~HumanB();

		HumanB &		operator=( HumanB const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, HumanB const & i );

#endif /* ********************************************************** HUMANB_H */