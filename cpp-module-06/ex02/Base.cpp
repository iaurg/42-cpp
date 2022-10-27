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
        std::cout << "Invalid" << std::endl;
}

void identify(Base& p)
{
    identify(&p);
}

/* ************************************************************************** */
