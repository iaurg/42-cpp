#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

class RobotomyRequestForm : public AForm {

public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const& src);
    virtual ~RobotomyRequestForm();
    std::string getTarget() const;

    RobotomyRequestForm& operator=(RobotomyRequestForm const& rhs);
    void execute(Bureaucrat const& executor) const;

private:
    std::string _target;
};

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */
