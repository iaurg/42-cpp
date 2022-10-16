#include "AForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute)
    : _name(name)
    , _signed(false)
    , _gradeToSign(gradeToSign)
    , _gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const& src)
    : _name(src._name)
    , _signed(src._signed)
    , _gradeToSign(src._gradeToSign)
    , _gradeToExecute(src._gradeToExecute)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AForm::~AForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AForm& AForm::operator=(AForm const& rhs)
{
    if (this != &rhs) {
        this->_signed = rhs._signed;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& o, AForm const& i)
{
    o << "AForm " << i.getName() << " is ";
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

void AForm::beSigned(Bureaucrat const& bureaucrat)
{
    if (bureaucrat.getGrade() > _gradeToSign)
        throw AForm::GradeTooLowException();
    _signed = true;
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return "Grade too high for AForm";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade too low for AForm";
}

const char* AForm::FormNotSignedException::what() const throw()
{
    return "Form not signed";
}

void AForm::execute(Bureaucrat const& executor) const
{
    if (executor.getGrade() > _gradeToExecute)
        throw AForm::GradeTooLowException();
    if (!_signed)
        throw AForm::FormNotSignedException();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string& AForm::getName() const
{
    return _name;
}

bool AForm::getSigned() const
{
    return _signed;
}

int AForm::getGradeToSign() const
{
    return _gradeToSign;
}

int AForm::getGradeToExecute() const
{
    return _gradeToExecute;
}

/* ************************************************************************** */
