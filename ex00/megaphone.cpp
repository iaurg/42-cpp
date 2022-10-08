#include <iostream>
#include <cstring>
#include <algorithm>

int main(int argc, char *argv[])
{
    int i = 1;
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    while (argc > i)
    {
        std::transform(argv[i], argv[i] + strlen(argv[i]), argv[i], toupper);
        std::cout << argv[i];
        i++;
    }
    std::cout << std::endl;
    return (0);
}
