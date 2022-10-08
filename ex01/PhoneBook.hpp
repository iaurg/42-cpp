#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>

class PhoneBook {
public:
    PhoneBook();
    PhoneBook(PhoneBook const& src);
    ~PhoneBook();
    void addContact();
    void searchContact();

private:
    Contact _contacts[8];
    static int _contactCount;
};

#endif /* ******************************************************* PHONEBOOK_H */
