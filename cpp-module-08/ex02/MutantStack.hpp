#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <string>

template <typename T>
class MutantStack : public std::stack<T> {

public:
    MutantStack();
    MutantStack(MutantStack const& src);
    ~MutantStack();

    MutantStack& operator=(MutantStack const& rhs);

    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin();
    iterator end();

    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    const_iterator begin() const;
    const_iterator end() const;

    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    reverse_iterator rbegin();
    reverse_iterator rend();

    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
    const_reverse_iterator rbegin() const;
    const_reverse_iterator rend() const;
};

#include "MutantStack.tpp"

#endif /* ***************************************************** MUTANTSTACK_H */
