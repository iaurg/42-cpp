#include "Brain.hpp"
#include <cmath>
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
    // Array of quotes
    std::string quotes[10] = {
        "What is the meaning of life?",
        "Where is the bathroom?",
        "Where is the nearest restroom?",
        "What time is it?",
        "When the hell is lunch?",
        "How much wood could a woodchuck chuck if a woodchuck could chuck wood?",
        "Who is the president of the United States?",
        "The quick brown fox jumps over the lazy dog.",
        "Is this a dagger which I see before me?",
        "Be not afraid of greatness: some are born great"
    };

    // Fill ideas with random strings
    for (int i = 0; i < 100; i++) {
        this->_ideas[i] = quotes[rand() % 10];
    }

    std::cout << "[Brain] default constructor called" << std::endl;
}

Brain::Brain(const Brain& src)
{
    std::cout << "[Brain] copy constructor called" << std::endl;
    *this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
    std::cout << "[Brain] destroyed" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain& Brain::operator=(Brain const& rhs)
{
    std::cout << "[Brain] assignation operator called" << std::endl;
    return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Brain::getIdea(int index) const
{
    if (index < 0 || index > 99) {
        std::cout << "Index out of bounds, brain overload!" << std::endl;
        return;
    } else {
        std::cout << "[Brain] Idea: " << this->_ideas[index] << std::endl;
    }
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
