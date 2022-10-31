#include <iostream>

#include "easyfind.hpp"

template <typename T>
static void testEasyFind(T& v, int value)
{
    std::cout << "Searching for " << value << " in: ";
    for (typename T::iterator it = v.begin(); it != v.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
    try {
        typename T::iterator it = easyfind(v, value);
        std::cout << "Found " << *it << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}

int main(void)
{

    {
        std::vector<int> vectorI;
        std::cout << "VECTOR" << std::endl;
        for (int i = 0; i < 10; i++) {

            vectorI.push_back(i);
        }

        testEasyFind(vectorI, 1);
        testEasyFind(vectorI, 2);
        testEasyFind(vectorI, 19);
        std::cout << std::endl;
    }

    {
        std::list<int> listI;

        std::cout << "LIST" << std::endl;
        for (int i = 0; i < 10; i++) {
            listI.push_back(i);
        }

        testEasyFind(listI, 1);
        testEasyFind(listI, 2);
        testEasyFind(listI, 19);
        std::cout << std::endl;
    }

    {
        std::deque<int> dequeI;

        std::cout << "DEQUE" << std::endl;
        for (int i = 0; i < 10; i++) {
            dequeI.push_back(i);
        }

        testEasyFind(dequeI, 1);
        testEasyFind(dequeI, 2);
        testEasyFind(dequeI, 19);
        std::cout << std::endl;
    }

    return (0);
}
