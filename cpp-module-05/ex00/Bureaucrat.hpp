#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat {

    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };

public:
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat const& src);
    ~Bureaucrat();

    Bureaucrat& operator=(Bureaucrat const& rhs);

    const std::string& getName() const;
    int getGrade() const;
    int incrementGrade();
    int decrementGrade();

private:
    const std::string _name;
    int _grade;
};

std::ostream& operator<<(std::ostream& o, Bureaucrat const& i);

#endif /* ****************************************************** BUREAUCRAT_H */
