#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {

public:
    Brain();
    Brain(Brain const& src);
    ~Brain();

    Brain& operator=(Brain const& rhs);
    std::string ideas[100];
    void getIdea(int i) const;

private:
};

std::ostream& operator<<(std::ostream& o, Brain const& i);

#endif /* *********************************************************** BRAIN_H */
