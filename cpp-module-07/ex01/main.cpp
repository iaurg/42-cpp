#include "iter.hpp"

template <typename T>
static void print(T const& x)
{
    std::cout << x << std::endl;
}

int main(void)
{
    {
        int array[] = { 0, 1, 2, 3, 4 };
        ::iter(array, 5, print);
    }
    std::cout << std::endl;
    {
        char array[] = { 'a', 'b', 'c', 'd', 'e' };
        ::iter(array, 5, print);
    }
    std::cout << std::endl;
    {
        std::string array[] = { "Hello", "World", "!" };
        ::iter(array, 3, print);
    }
    std::cout << std::endl;
    {
        float array[] = { 0.0f, 1.1f, 2.2f, 3.3f, 4.4f };
        ::iter(array, 5, print);
    }

    return 0;
}
