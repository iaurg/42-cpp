#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>

class PresidentialPardonForm {

public:
    PresidentialPardonForm();
    PresidentialPardonForm(PresidentialPardonForm const& src);
    ~PresidentialPardonForm();

    PresidentialPardonForm& operator=(PresidentialPardonForm const& rhs);

private:
};

std::ostream& operator<<(std::ostream& o, PresidentialPardonForm const& i);

#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */
