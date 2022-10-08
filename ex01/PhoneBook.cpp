#include "PhoneBook.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PhoneBook::PhoneBook()
{
    std::cout << "PhoneBook created" << std::endl;
}

PhoneBook::PhoneBook(const PhoneBook& src)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PhoneBook::~PhoneBook()
{
    std::cout << "PhoneBook destructor called" << std::endl;
}

/*

/*
** --------------------------------- METHODS ----------------------------------
*/

void PhoneBook::addContact()
{
    if (_contactCount < 8) {
        _contacts[_contactCount] = Contact();
        _contactCount++;
    } else {
        std::cout << "Phonebook is full" << std::endl;
    }
    std::cout << "addContact called" << std::endl;
}

void PhoneBook::searchContact()
{
    std::cout << "searchContact called" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
