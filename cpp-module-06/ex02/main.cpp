#include "Base.hpp"

int main(void)
{
    {
        std::cout << "Class declaration" << std::endl;
        A* a = new A();
        identify(a);
        identify(*a);
    }

    std::cout << std::endl;

    {
        std::cout << "Invalid Class" << std::endl;
        Base* base = new Base();
        identify(base);
        identify(*base);
    }

    std::cout << std::endl;

    {
        std::cout << "Random Class" << std::endl;
        Base* random = generate();
        identify(random);
        identify(*random);
    }

    return (0);
}
