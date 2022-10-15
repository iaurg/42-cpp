#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    Bureaucrat bob("Bob", 100);
    Bureaucrat lenny("Lenny", 50);
    Bureaucrat jenny("Jenny", 5);
    ShrubberyCreationForm sForm("Townhall");
    RobotomyRequestForm rForm("R2D2");
    PresidentialPardonForm pForm("Zizou");

    std::cout << bob << std::endl;
    std::cout << lenny << std::endl;
    std::cout << jenny << std::endl;
    std::cout << sForm << std::endl;
    std::cout << rForm << std::endl;
    std::cout << pForm << std::endl;

    bob.signForm(sForm);
    std::cout << std::endl;
    bob.executeForm(sForm);
    std::cout << std::endl;
    bob.signForm(rForm);
    std::cout << std::endl;
    lenny.signForm(rForm);
    std::cout << std::endl;
    lenny.executeForm(rForm);
    std::cout << std::endl;
    jenny.executeForm(rForm);
    std::cout << std::endl;
    jenny.executeForm(rForm);
    std::cout << std::endl;
    jenny.executeForm(rForm);
    std::cout << std::endl;
    jenny.executeForm(pForm);
    std::cout << std::endl;
    jenny.signForm(pForm);
    std::cout << std::endl;
    jenny.executeForm(pForm);
    std::cout << std::endl;
    return (0);
}
