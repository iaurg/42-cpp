#include "PhoneBook.hpp"

int PhoneBook::_contactCount = 0;

static void printOut(std::string str, const char* color)
{
    std::cout << color << str << std::endl
              << RESET;
}

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::_add(Contact* contact)
{
    if (PhoneBook::_contactCount < 8)
        this->_contacts[PhoneBook::_contactCount++] = *contact;
    else {
        printOut("Phonebook is full, first contact will be replaced", YELLOW);
        this->_contacts[0] = *contact;
    }
}

void PhoneBook::addContact()
{
    Contact contact;

    _getInfo("First name", contact);
    _getInfo("Last name", contact);
    _getInfo("Nickname", contact);
    _getInfo("Phone number", contact);
    _getInfo("Darkest secret", contact);
    this->_add(&contact);
}

void PhoneBook::_getInfo(std::string fieldName, Contact& contact)
{
    std::string buffer;
    while (!buffer.length()) {
        printOut("Enter " + fieldName + ": ", GREEN);
        std::getline(std::cin, buffer);
        if (buffer.length() == 0)
            printOut("Field cannot be empty", RED);
    }
    contact.setValue(fieldName, buffer);
}

std::string PhoneBook::_truncate(std::string str)
{
    std::string result = str;
    if (str.length() > 10)
        return result.substr(0, 9) + ".";
    return result;
}

static void printTableLine(std::string str)
{
    std::cout << std::setw(10) << str << "|";
}

static void printTableHeader()
{
    printTableLine("Index");
    printTableLine("First name");
    printTableLine("Last name");
    printTableLine("Nickname");
    printTableLine("Secret");
    std::cout << std::endl;
}

void PhoneBook::_printTableContent(int index, Contact contact)
{
    std::cout << std::setw(10) << index << "|";
    printTableLine(_truncate(contact.getValue("firstName")));
    printTableLine(_truncate(contact.getValue("lastName")));
    printTableLine(_truncate(contact.getValue("nickname")));
    printTableLine(_truncate(contact.getValue("darkestSecret")));
    std::cout << std::endl;
}

void PhoneBook::searchContact()
{
    int i = 0;
    int index;
    std::string buffer;

    if (PhoneBook::_contactCount == 0) {
        printOut("No contacts to search", YELLOW);
        return;
    }

    printTableHeader();
    while (i < PhoneBook::_contactCount) {
        _printTableContent(i, this->_contacts[i]);
        i++;
    }

    while (1) {
        printOut("Enter index to display: ", GREEN);
        std::getline(std::cin, buffer);
        if (buffer.length() == 0) {
            printOut("Index cannot be empty", RED);
            continue;
        }
        index = atoi(buffer.c_str());
        std::cout << index << std::endl;
        if (index < 0 || index >= PhoneBook::_contactCount) {
            printOut("Invalid index", RED);
            continue;
        }
        break;
    }
    printOut("First name: " + this->_contacts[index].getValue("firstName"), WHITE);
    printOut("Last name: " + this->_contacts[index].getValue("lastName"), WHITE);
    printOut("Nickname: " + this->_contacts[index].getValue("nickname"), WHITE);
    printOut("Phone number: " + this->_contacts[index].getValue("phoneNumber"), WHITE);
    printOut("Darkest secret: " + this->_contacts[index].getValue("darkestSecret"), WHITE);
}

void PhoneBook::title(void)
{
    printOut(" ", WHITE);
    printOut("██████╗ ██╗  ██╗ ██████╗ ███╗   ██╗███████╗██████╗  ██████╗  ██████╗ ██╗  ██╗", BLUE);
    printOut("██╔══██╗██║  ██║██╔═══██╗████╗  ██║██╔════╝██╔══██╗██╔═══██╗██╔═══██╗██║ ██╔╝", RED);
    printOut("██████╔╝███████║██║   ██║██╔██╗ ██║█████╗  ██████╔╝██║   ██║██║   ██║█████╔╝ ", GREEN);
    printOut("██╔═══╝ ██╔══██║██║   ██║██║╚██╗██║██╔══╝  ██╔══██╗██║   ██║██║   ██║██╔═██╗ ", YELLOW);
    printOut("██║     ██║  ██║╚██████╔╝██║ ╚████║███████╗██████╔╝╚██████╔╝╚██████╔╝██║  ██╗", CYAN);
    printOut("╚═╝     ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚═════╝  ╚═════╝  ╚═════╝ ╚═╝  ╚═╝", MAGENTA);
    printOut(" ", WHITE);
    printOut("Welcome to your phonebook !\nThe available commands are : ", WHITE);
    printOut(" - ADD \n - SEARCH \n - EXIT \n", BLUE);
}

void PhoneBook::create(void)
{
    std::string command;

    title();
    while (1) {
        std::cout << BLUE << "Enter a command: ";
        std::getline(std::cin, command);
        std::cout << RESET;
        if (command == "EXIT")
            break;
        else if (command == "ADD")
            addContact();
        else if (command == "SEARCH")
            searchContact();
        else
            std::cout << RED << "Invalid command" << std::endl;
    }
}
