#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat b1("b1", 1);
    Bureaucrat b2("b2", 150);
    Form f1("f1", 1, 1);
    Form f2("f2", 150, 150);

    std::cout << b1 << std::endl;
    std::cout << b2 << std::endl;
    std::cout << f1 << std::endl;
    std::cout << f2 << std::endl;

    b1.signForm(f1);
    b2.signForm(f2);
    b1.signForm(f2);
    b2.signForm(f1);

    return 0;
}
