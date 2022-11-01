#include "Intern.hpp"

template <typename T>
void showFormDetails(AForm* form)
{
    std::cout << "Form name: " << form->getName() << std::endl;
    std::cout << "Form grade to sign: " << form->getGradeToSign() << std::endl;
    std::cout << "Form grade to execute: " << form->getGradeToExecute() << std::endl;
    std::cout << "Form is signed: " << form->getSigned() << std::endl;
    T* target = dynamic_cast<T*>(form);
    if (target)
        std::cout << "Form target: " << target->getTarget() << std::endl;
}

int main(void)
{
    Bureaucrat* testBureaucrat;
    Intern testIntern;
    AForm* testForm;

    std::cout << std::endl;

    try {
        testBureaucrat = new Bureaucrat("Bob", 1);
        testForm = testIntern.makeForm("shrubbery creation", "Bobbie");
        showFormDetails<ShrubberyCreationForm>(testForm);
        testBureaucrat->signForm(*testForm);
        std::cout << *testForm;
        testBureaucrat->executeForm(*testForm);
        delete testBureaucrat;
        delete testForm;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    try {
        testBureaucrat = new Bureaucrat("Tob", 1);
        testForm = testIntern.makeForm("robotomy request", "Tobbie");
        showFormDetails<RobotomyRequestForm>(testForm);
        testBureaucrat->signForm(*testForm);
        std::cout << *testForm;
        testBureaucrat->executeForm(*testForm);
        delete testBureaucrat;
        delete testForm;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    try {
        testBureaucrat = new Bureaucrat("Job", 1);
        testForm = testIntern.makeForm("presidential pardon", "Jobbie");
        showFormDetails<PresidentialPardonForm>(testForm);
        testBureaucrat->signForm(*testForm);
        std::cout << *testForm;
        testBureaucrat->executeForm(*testForm);
        delete testBureaucrat;
        delete testForm;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    try {
        testBureaucrat = new Bureaucrat("Xob", 150);
        testForm = testIntern.makeForm("invalid form", "Xobbie");
        showFormDetails<PresidentialPardonForm>(testForm);
        testBureaucrat->signForm(*testForm);
        std::cout << *testForm;
        testBureaucrat->executeForm(*testForm);
        delete testBureaucrat;
        delete testForm;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
        delete testBureaucrat;
    }

    std::cout << std::endl;

    try {
        testBureaucrat = new Bureaucrat("Lob", 150);
        testForm = new PresidentialPardonForm("Lobbie");
        showFormDetails<PresidentialPardonForm>(testForm);
        testBureaucrat->signForm(*testForm);
        std::cout << *testForm;
        testBureaucrat->executeForm(*testForm);
        delete testBureaucrat;
        delete testForm;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    try {
        testBureaucrat = new Bureaucrat("Pob", 20);
        testForm = new PresidentialPardonForm("Pobbie");
        showFormDetails<PresidentialPardonForm>(testForm);
        std::cout << *testBureaucrat;
        testBureaucrat->signForm(*testForm);
        std::cout << *testForm;
        testBureaucrat->executeForm(*testForm);
        delete testBureaucrat;
        delete testForm;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    return (0);
}
