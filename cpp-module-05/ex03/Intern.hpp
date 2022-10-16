#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <string>

class AForm;
class Intern {
    class FormNotCreated : public std::exception {
    public:
        const char* what() const throw();
    };

public:
    Intern();
    Intern(Intern const& src);
    ~Intern();

    AForm* makeForm(std::string const& name, std::string const& target);
    Intern& operator=(Intern const& rhs);

private:
    AForm* _makePresidentialPardonForm(std::string const& target);
    AForm* _makeRobotomyRequestForm(std::string const& target);
    AForm* _makeShrubberyCreationForm(std::string const& target);
};

#endif /* ********************************************************** INTERN_H */
