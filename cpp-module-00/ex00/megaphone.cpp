#include <cstring>
#include <iostream>

int main(int argc, char* argv[])
{
    int i = 1;
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    while (i < argc) {
        for (size_t j = 0; j < std::strlen(argv[i]); j++) {
            std::cout << (char)std::toupper(argv[i][j]);
        }
        i++;
    }
    std::cout << std::endl;
    return (0);
}
