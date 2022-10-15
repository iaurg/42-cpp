#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>

class RobotomyRequestForm {

public:
    RobotomyRequestForm();
    RobotomyRequestForm(RobotomyRequestForm const& src);
    ~RobotomyRequestForm();

    RobotomyRequestForm& operator=(RobotomyRequestForm const& rhs);

private:
};

std::ostream& operator<<(std::ostream& o, RobotomyRequestForm const& i);

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */
