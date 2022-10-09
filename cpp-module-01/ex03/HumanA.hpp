#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>

class HumanA
{

	public:

		HumanA();
		HumanA( HumanA const & src );
		~HumanA();

		HumanA &		operator=( HumanA const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, HumanA const & i );

#endif /* ********************************************************** HUMANA_H */