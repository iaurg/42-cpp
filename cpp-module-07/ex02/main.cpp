#include "Array.hpp"

template <typename T>
static void printArray(Array<T>& arr)
{
    for (int i = 0; i < arr.size(); i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main(void)
{
    {
        Array<int> a;
        std::cout << "a.size(): " << a.size() << std::endl;
    }

    {
        unsigned int size = 5;
        Array<int> a(size);
        std::cout << "a.size(): " << a.size() << std::endl;

        for (int i = 0; i < size; i++) {
            a[i] = i;
        }

        printArray(a);
    }

    {
        unsigned int size = 5;
        Array<int> a(size);
        Array<int> b(size);
        Array<char> c(size);
        Array<std::string> d(size);

        for (int i = 0; i < size; i++) {
            a[i] = i;
            b[i] = i;
            c[i] = 'a' + i;
            d[i] = "hello";
        }

        printArray(a);
        printArray(b);
        printArray(c);
        printArray(d);
    }

    {
        unsigned int size = 5;
        Array<int> a(size);

        try {
            std::cout << a[50] << std::endl;
        } catch (std::exception& e) {
            std::cout << e.what() << std::endl;
        }
    }

    return 0;
}
