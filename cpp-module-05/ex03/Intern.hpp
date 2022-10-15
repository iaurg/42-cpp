#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>

class Intern {

public:
    Intern();
    Intern(Intern const& src);
    ~Intern();

    Intern& operator=(Intern const& rhs);

private:
};

std::ostream& operator<<(std::ostream& o, Intern const& i);

#endif /* ********************************************************** INTERN_H */
