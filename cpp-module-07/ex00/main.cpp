#include "whatever.hpp"

int main(void)
{
    {
        int a = 2;
        int b = 3;
        ::Swap(a, b);
        std::cout << "Swap a = " << a << ", b = " << b << std::endl;
        std::cout << "Min( a, b ) = " << ::Min(a, b) << std::endl;
        std::cout << "Max( a, b ) = " << ::Max(a, b) << std::endl;
    }
    std::cout << std::endl;
    {
        int a = 2;
        int b = 2;

        std::cout << "Swap a = " << a << ", b = " << b << std::endl;
        std::cout << "Min( a, b ) = " << ::Min(a, b) << std::endl;
        std::cout << "Max( a, b ) = " << ::Max(a, b) << std::endl;
    }
    std::cout << std::endl;
    {
        float a = 2.2f;
        float b = 3.3f;
        ::Swap(a, b);
        std::cout << "Swap a = " << a << ", b = " << b << std::endl;
        std::cout << "Min( a, b ) = " << ::Min(a, b) << std::endl;
        std::cout << "Max( a, b ) = " << ::Max(a, b) << std::endl;
    }
    std::cout << std::endl;
    {
        char a = 'A';
        char b = 'B';
        ::Swap(a, b);
        std::cout << "Swap a = " << a << ", b = " << b << std::endl;
        std::cout << "Min( a, b ) = " << ::Min(a, b) << std::endl;
        std::cout << "Max( a, b ) = " << ::Max(a, b) << std::endl;
    }

    return 0;
}
