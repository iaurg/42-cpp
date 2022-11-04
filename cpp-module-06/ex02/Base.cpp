#include "Base.hpp"

Base::~Base() { }

Base* generate(void)
{
    std::srand(std::time(NULL)); // use current time as seed for random generator

    int i = std::rand() % 3;

    switch (i) {
    case 0:
        return new A();
    case 1:
        return new B();
    case 2:
        return new C();
    default:
        return NULL;
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cerr << "Unknown Base pointer" << std::endl;
}

void identify(Base& p)
{
    try {
        A& a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    } catch (std::exception& e) {
        try {
            B& b = dynamic_cast<B&>(p);
            std::cout << "B" << std::endl;
        } catch (std::exception& e) {
            try {
                C& c = dynamic_cast<C&>(p);
                std::cout << "C" << std::endl;
            } catch (std::exception& e) {
                std::cerr << "Unknown Base reference" << std::endl;
            }
        }
    }
}

/* ************************************************************************** */
