#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {

public:
    Contact();
    ~Contact();
    std::string getValue(std::string fieldName) const;
    void setValue(std::string fieldName, std::string& field);

private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _phoneNumber;
    std::string _darkestSecret;
};

#endif /* ********************************************************* CONTACT_H */
