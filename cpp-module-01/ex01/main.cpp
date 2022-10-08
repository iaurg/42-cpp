#include "Zombie.hpp"

int main()
{
    Zombie* finalHorde = zombieHorde(5, "Zombu");
    for (int i = 0; i < 5; i++)
        finalHorde[i].announce();
    delete[] finalHorde;
    return 0;
}
