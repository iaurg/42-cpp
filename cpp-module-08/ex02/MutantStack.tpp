#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() { }

template <typename T>
MutantStack<T>::MutantStack(MutantStack const& src) { }

template <typename T>
MutantStack<T>::~MutantStack() { }

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(MutantStack const& rhs)
{
    return *this;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return std::stack<T>::c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return std::stack<T>::c.end();
}
