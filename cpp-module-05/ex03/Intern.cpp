#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern(const Intern& src)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern& Intern::operator=(Intern const& rhs)
{
    return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AForm* Intern::_makePresidentialPardonForm(std::string const& target)
{
    return new PresidentialPardonForm(target);
}

AForm* Intern::_makeRobotomyRequestForm(std::string const& target)
{
    return new RobotomyRequestForm(target);
}

AForm* Intern::_makeShrubberyCreationForm(std::string const& target)
{
    return new ShrubberyCreationForm(target);
}

AForm* Intern::makeForm(std::string const& name, std::string const& target)
{
    AForm* form = NULL;

    AForm* (Intern::*robotomy)(std::string const& target) = &Intern::_makeRobotomyRequestForm;
    AForm* (Intern::*presidential)(std::string const& target) = &Intern::_makePresidentialPardonForm;
    AForm* (Intern::*shrubbery)(std::string const& target) = &Intern::_makeShrubberyCreationForm;

    AForm* (Intern::*formCreator[3])(std::string const& target) = { robotomy, presidential, shrubbery };

    std::string names[3] = { "robotomy request", "presidential pardon", "shrubbery creation" };

    for (int i = 0; i < 3; i++) {
        if (name == names[i]) {
            form = (this->*formCreator[i])(target);
            std::cout << "Intern creates " << name << std::endl;
            return form;
        }
    }

    throw Intern::FormNotCreated();
}

const char* Intern::FormNotCreated::what() const throw()
{
    return "Form cannot be created by Intern";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
