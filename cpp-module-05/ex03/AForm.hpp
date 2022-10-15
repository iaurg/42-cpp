#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Bureaucrat;

class AForm {
    class GradeTooHighException : public std::exception {
    public:
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        const char* what() const throw();
    };

    class FormNotSignedException : public std::exception {
    public:
        const char* what() const throw();
    };

public:
    AForm(std::string name, int gradeToSign, int gradeToExecute);
    AForm(AForm const& src);

    AForm& operator=(AForm const& rhs);
    const std::string& getName() const;
    bool getSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    void beSigned(Bureaucrat const& bureaucrat);

    virtual ~AForm();
    virtual void execute(Bureaucrat const& executor) const = 0;

private:
    const std::string _name;
    bool _signed;
    const int _gradeToSign;
    const int _gradeToExecute;
};

std::ostream& operator<<(std::ostream& o, AForm const& i);

#endif /* ************************************************************ AFORM_H */
