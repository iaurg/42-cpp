#include "whatever.hpp"

int main(void)
{
    {
        int a = 2;
        int b = 3;
        ::swap(a, b);
        std::cout << "swap a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
        std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
    }
    std::cout << std::endl;
    {
        int a = 2;
        int b = 2;

        std::cout << "swap a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
        std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
    }
    std::cout << std::endl;
    {
        float a = 2.2f;
        float b = 3.3f;
        ::swap(a, b);
        std::cout << "swap a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
        std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
    }
    std::cout << std::endl;
    {
        char a = 'A';
        char b = 'B';
        ::swap(a, b);
        std::cout << "swap a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
        std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
    }
    std::cout << std::endl;
    {
        std::string c = "chaine1";
        std::string d = "chaine2";
        ::swap(c, d);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
        std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
    }

    return 0;
}
