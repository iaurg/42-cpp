#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    {
        ClapTrap rob("Robert");
        ScavTrap sit("Sithy");
        FragTrap tim("Timothy");

        std::cout << rob << std::endl;
        std::cout << sit << std::endl;
        std::cout << tim << std::endl;
    }
    std::cout << std::endl
              << std::endl;
    {
        FragTrap norb("Norbert");

        norb.attack("Jeremy");
        std::cout << norb << std::endl;
        norb.takeDamage(25);
        std::cout << norb << std::endl;
        norb.takeDamage(18);
        std::cout << norb << std::endl;
        norb.attack("Valerie");
        norb.attack("Cassie");
        norb.attack("Victor");
        norb.attack("Tristan");
        std::cout << norb << std::endl;
        norb.beRepaired(40);
        std::cout << norb << std::endl;
        norb.attack("Killian");
        norb.highFivesGuys();
        norb.takeDamage(8);
        std::cout << norb << std::endl;
        norb.attack("Dominic");
        norb.highFivesGuys();
    }
    return (0);
}
