#include "Bureaucrat.hpp"

int main(void)
{
    try {
        Bureaucrat b("Bob", 0);
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat b("Ted", 151);
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat b("Cleber", 1);
        std::cout << b << std::endl;
        b.incrementGrade();
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat b("Jeremy", 150);
        std::cout << b << std::endl;
        b.decrementGrade();
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
