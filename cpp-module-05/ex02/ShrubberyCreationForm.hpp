#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

class ShrubberyCreationForm : public AForm {

public:
    class FileOpenException : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    class FileErrorException : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const& src);
    virtual ~ShrubberyCreationForm();

    ShrubberyCreationForm& operator=(ShrubberyCreationForm const& rhs);
    std::string getTarget() const;

    void execute(Bureaucrat const& executor) const;

private:
    std::string _target;
};

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */
