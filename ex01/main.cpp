#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook phoneBook;
    std::string command;

    while (1) {
        std::cout << "Enter a command: ";
        std::getline(std::cin, command);
        if (command == "EXIT")
            break;
        else if (command == "ADD")
            phoneBook.addContact();
        else if (command == "SEARCH")
            phoneBook.searchContact();
        else
            std::cout << "Invalid command" << std::endl;
    }
    return (0);
}
