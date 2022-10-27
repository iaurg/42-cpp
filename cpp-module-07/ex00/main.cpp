#include "whatever.hpp"

int main(void)
{
    MyArray<int, 9> array;
    array[0] = 42;
    std::cout << array.getSize() << std::endl;
    std::cout << array[0] << std::endl;
}
