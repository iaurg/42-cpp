#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::getValue(std::string fieldName) const
{
    if (fieldName == "firstName")
        return this->_firstName;
    else if (fieldName == "lastName")
        return this->_lastName;
    else if (fieldName == "nickname")
        return this->_nickname;
    else if (fieldName == "phoneNumber")
        return this->_phoneNumber;
    else if (fieldName == "darkestSecret")
        return this->_darkestSecret;
    return "";
}

void Contact::setValue(std::string fieldName, std::string& field)
{
    if (fieldName == "First name")
        this->_firstName = field;
    else if (fieldName == "Last name")
        this->_lastName = field;
    else if (fieldName == "Nickname")
        this->_nickname = field;
    else if (fieldName == "Phone number")
        this->_phoneNumber = field;
    else if (fieldName == "Darkest secret")
        this->_darkestSecret = field;
}
