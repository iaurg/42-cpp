#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <string>
#define RESET "\033[0m"
#define RED "\033[31m" /* Red */
#define GREEN "\033[32m" /* Green */
#define YELLOW "\033[33m" /* Yellow */
#define BLUE "\033[34m" /* Blue */
#define MAGENTA "\033[35m" /* Magenta */
#define CYAN "\033[36m" /* Cyan */
#define WHITE "\033[37m" /* White */

class PhoneBook {
public:
    PhoneBook();
    ~PhoneBook();
    void addContact();
    void searchContact();
    void title(void);
    void create();

private:
    Contact _contacts[8];
    static int _contactCount;
    void _add(Contact* contact);
    void _getInfo(std::string fieldName, Contact& contact);
    std::string _truncate(std::string str);
    void _printTableContent(int index, Contact contact);
};

#endif /* ******************************************************* PHONEBOOK_H */
