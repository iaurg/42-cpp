#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
    : AForm("RobotomyRequestForm", 72, 45)
    , _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src)
    : AForm(src)
    , _target(src._target)
{
    *this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& rhs)
{
    if (this != &rhs) {
        this->_target = rhs.getTarget();
    }
    return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string RobotomyRequestForm::getTarget() const
{
    return _target;
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
    std::cout << "BIP BOP [*.*]" << std::endl;
    std::srand(std::time(NULL)); // use current time as seed for random generator
    if (std::rand() % 2 == 0)
        std::cout << _target << " has been robotomized successfully" << std::endl;
    else
        std::cout << _target << " robotomy has been failed" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
