#include "Base.hpp"

int main(void)
{
    {
        std::cout << "Class declaration" << std::endl;
        A* a = new A();
        identify(a);
        identify(*a);
        delete a;
    }

    std::cout << std::endl;

    {
        std::cout << "Invalid Class" << std::endl;
        Base* base = new Base();
        identify(base);
        identify(*base);
        delete base;
    }

    std::cout << std::endl;

    {
        std::cout << "Random Class" << std::endl;
        Base* random = generate();
        identify(random);
        identify(*random);
        delete random;
    }

    return (0);
}
