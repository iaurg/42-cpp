#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include <string>

class PresidentialPardonForm : public AForm {

public:
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm const& src);
    virtual ~PresidentialPardonForm();
    std::string getTarget() const;

    void execute(Bureaucrat const& executor) const;

    PresidentialPardonForm& operator=(PresidentialPardonForm const& rhs);

private:
    std::string _target;
};

#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */
