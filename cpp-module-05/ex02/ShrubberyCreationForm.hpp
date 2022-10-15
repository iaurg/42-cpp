#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>

class ShrubberyCreationForm {

public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(ShrubberyCreationForm const& src);
    ~ShrubberyCreationForm();

    ShrubberyCreationForm& operator=(ShrubberyCreationForm const& rhs);

private:
};

std::ostream& operator<<(std::ostream& o, ShrubberyCreationForm const& i);

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */
