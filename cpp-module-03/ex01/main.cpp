#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap clap("Clapboy");
    ScavTrap scav("Scavlava");

    std::cout << "\n";

    std::cout << "Name: " << scav.getName() << std::endl;
    std::cout << "HP:" << scav.getHP() << std::endl;
    std::cout << "Energy Points:" << scav.getEP() << std::endl;
    std::cout << "Attack Damage:" << scav.getAD() << std::endl;

    std::cout << "------- VS -------" << std::endl;

    std::cout << "Name: " << clap.getName() << std::endl;
    std::cout << "HP:" << clap.getHP() << std::endl;
    std::cout << "Energy Points:" << clap.getEP() << std::endl;
    std::cout << "Attack Damage:" << clap.getAD() << std::endl;

    std::cout << "\n";

    clap.attack(scav.getName());
    scav.takeDamage(clap.getAD());
    scav.guardGate();
    scav.beRepaired(1);
    std::cout << "\n";

    scav.attack(clap.getName());
    clap.takeDamage(scav.getAD());
    scav.guardGate();
    scav.beRepaired(1);
    std::cout << "\n";

    clap.attack(scav.getName());
    scav.takeDamage(clap.getAD());
    scav.guardGate();
    scav.beRepaired(1);
    std::cout << "\n";

    clap.beRepaired(1);
    std::cout << "\n";

    clap.attack(scav.getName());
    scav.takeDamage(clap.getAD());
    scav.attack(clap.getName());
    std::cout << "\n";

    clap.beRepaired(10);
    scav.beRepaired(10);
    std::cout << "\n";

    return (0);
}
