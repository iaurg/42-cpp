#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    {
        ClapTrap rob("Robert");
        ScavTrap sit("Sithy");
        FragTrap tim("Timothy");

        std::cout << rob.getName() << std::endl;
        std::cout << sit.getName() << std::endl;
        std::cout << tim.getName() << std::endl;
    }

    std::cout << std::endl
              << std::endl;
    {
        FragTrap norb("Norbert");

        norb.attack("Jeremy");
        norb.takeDamage(25);
        norb.takeDamage(18);
        norb.attack("Valerie");
        norb.attack("Cassie");
        norb.attack("Victor");
        norb.attack("Tristan");
        norb.beRepaired(40);
        norb.attack("Killian");
        norb.highFivesGuys();
        norb.takeDamage(8);
        norb.attack("Dominic");
        norb.highFivesGuys();
    }
    return (0);
}
