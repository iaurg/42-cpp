#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap clapTrap("ClapTrap");
    ClapTrap clapTrap2("CopyTrap");
    ClapTrap copyTrap(clapTrap2);

    clapTrap.setAD(5);
    clapTrap.attack(copyTrap.getName());
    copyTrap.takeDamage(9);
    copyTrap.beRepaired(10);
    std::cout << "CopyTrap HP: " << copyTrap.getHP() << std::endl;
    std::cout << '\n';

    copyTrap.attack(clapTrap.getName());
    clapTrap.takeDamage(10);
    copyTrap.beRepaired(10);
    std::cout << '\n';

    copyTrap.attack(copyTrap.getName());
    copyTrap.takeDamage(10);
    clapTrap.beRepaired(10);
    std::cout << '\n';

    copyTrap.attack(clapTrap.getName());
    clapTrap.takeDamage(10);
    clapTrap.beRepaired(10);
    std::cout << '\n';

    return 0;
}
