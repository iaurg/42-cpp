#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    {
        const Dog* j = new Dog();
        const Cat* i = new Cat();
        // const AAnimal* k = new AAnimal(); // Error: cannot instantiate abstract class

        delete j; // should not create a leak
        delete i;
    }
    {
        // Create and fill an array of Animals
        const int size = 30;
        const AAnimal* animals[size];
        // const AAnimal* example = new AAnimal();

        for (int i = 0; i < size; i++) {
            if (i % 2 == 0)
                animals[i] = new Dog();
            else
                animals[i] = new Cat();
        }

        // Make all the animals speak
        for (int i = 0; i < size; i++) {
            animals[i]->makeSound();
            animals[i]->getBrain()->getIdea(i);
        }

        // Delete all the animals
        for (int i = 0; i < size; i++) {
            delete animals[i];
        }
    }
    return 0;
}
