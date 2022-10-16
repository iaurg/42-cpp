#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(std::string name, int gradeToSign, int gradeToExecute)
    : _name(name)
    , _signed(false)
    , _gradeToSign(gradeToSign)
    , _gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1)
        throw Form::GradeTooHighException();
    if (gradeToSign > 150)
        throw Form::GradeTooLowException();
    if (gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (gradeToExecute > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form const& src)
    : _name(src._name)
    , _signed(src._signed)
    , _gradeToSign(src._gradeToSign)
    , _gradeToExecute(src._gradeToExecute)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form& Form::operator=(Form const& rhs)
{
    if (this != &rhs) {
        this->_signed = rhs._signed;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& o, Form const& i)
{
    o << "Form " << i.getName() << " is ";
    if (i.getSigned())
        o << "signed";
    else
        o << "not signed";
    o << " and requires a grade of " << i.getGradeToSign() << " to sign and "
      << i.getGradeToExecute() << " to execute." << std::endl;
    return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Form::beSigned(Bureaucrat const& bureaucrat)
{
    if (bureaucrat.getGrade() > _gradeToSign)
        throw Form::GradeTooLowException();
    _signed = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade too high for Form";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade too low for Form";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string& Form::getName() const
{
    return _name;
}

bool Form::getSigned() const
{
    return _signed;
}

int Form::getGradeToSign() const
{
    return _gradeToSign;
}

int Form::getGradeToExecute() const
{
    return _gradeToExecute;
}

/* ************************************************************************** */
