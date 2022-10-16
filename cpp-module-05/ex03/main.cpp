
#include "Intern.hpp"

int main(void)
{
    Bureaucrat* testBureaucrat;
    Intern testIntern;
    AForm* testForm;

    std::cout << "\n";

    try {
        testBureaucrat = new Bureaucrat("Bob", 1);
        testForm = testIntern.makeForm("shrubbery creation", "Bobbie");
        testBureaucrat->signForm(*testForm);
        std::cout << *testForm;
        testBureaucrat->executeForm(*testForm);
        delete testBureaucrat;
        delete testForm;
    } catch (std::exception& e) {
        std::cerr << e.what() << "\n";
    }

    std::cout << "\n";

    try {
        testBureaucrat = new Bureaucrat("Tob", 1);
        testForm = testIntern.makeForm("robotomy request", "Tobbie");
        testBureaucrat->signForm(*testForm);
        std::cout << *testForm;
        testBureaucrat->executeForm(*testForm);
        delete testBureaucrat;
        delete testForm;
    } catch (std::exception& e) {
        std::cerr << e.what() << "\n";
    }

    std::cout << "\n";

    try {
        testBureaucrat = new Bureaucrat("Job", 1);
        testForm = testIntern.makeForm("presidential pardon", "Jobbie");
        testBureaucrat->signForm(*testForm);
        std::cout << *testForm;
        testBureaucrat->executeForm(*testForm);
        delete testBureaucrat;
        delete testForm;
    } catch (std::exception& e) {
        std::cerr << e.what() << "\n";
    }

    std::cout << "\n";

    try {
        testBureaucrat = new Bureaucrat("Xob", 150);
        testForm = testIntern.makeForm("invalid form", "Xobbie");
        testBureaucrat->signForm(*testForm);
        std::cout << *testForm;
        testBureaucrat->executeForm(*testForm);
        delete testBureaucrat;
        delete testForm;
    } catch (std::exception& e) {
        std::cerr << e.what() << "\n";
        delete testBureaucrat;
    }

    std::cout << "\n";

    try {
        testBureaucrat = new Bureaucrat("Lob", 150);
        testForm = new PresidentialPardonForm("Lobbie");
        testBureaucrat->signForm(*testForm);
        std::cout << *testForm;
        testBureaucrat->executeForm(*testForm);
        delete testBureaucrat;
        delete testForm;
    } catch (std::exception& e) {
        std::cerr << e.what() << "\n";
    }

    std::cout << "\n";

    try {
        testBureaucrat = new Bureaucrat("Pob", 20);
        testForm = new PresidentialPardonForm("Pobbie");
        std::cout << *testBureaucrat;
        testBureaucrat->signForm(*testForm);
        std::cout << *testForm;
        testBureaucrat->executeForm(*testForm);
        delete testBureaucrat;
        delete testForm;
    } catch (std::exception& e) {
        std::cerr << e.what() << "\n";
    }

    std::cout << "\n";

    return (0);
}
