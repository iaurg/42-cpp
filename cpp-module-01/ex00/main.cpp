#include "Zombie.hpp"

void example1()
{
    std::cout << "Creating zombie Pepe manually..." << std::endl;
    Zombie pepe = Zombie("Pepe");
    pepe.announce();
    std::cout << std::endl;

    std::cout << "Creating zombie Heapylo on heap..." << std::endl;
    Zombie* heapylo = newZombie("Heapylo");
    heapylo->announce();
    delete heapylo;
    std::cout << std::endl;

    std::cout << "Creating zombie Stacko on stack..." << std::endl;
    randomChump("Stacko");
}

void example2()
{
    std::cout << "Creating zombie Pepe manually..." << std::endl;
    {
        Zombie pepe = Zombie("Pepe");
        pepe.announce();
    }
    std::cout << std::endl;

    std::cout << "Creating zombie Heapylo on heap..." << std::endl;
    {
        Zombie* heapylo = newZombie("Heapylo");
        heapylo->announce();
        delete heapylo;
    }
    std::cout << std::endl;

    std::cout << "Creating zombie Stacko on stack..." << std::endl;
    {
        randomChump("Stacko");
    }
}

int main(void)
{
    std::cout << "Example 1:" << std::endl;
    example1();
    std::cout << std::string(50, '-') << std::endl;
    std::cout << "Example 2:" << std::endl;
    example2();
    return (0);
}
