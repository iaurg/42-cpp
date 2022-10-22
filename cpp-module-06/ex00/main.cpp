#include "Converter.hpp"

int main(int argc, char** argv)
{
    if (argc != 2) {
        std::cerr << "Wrong Command: Use ./convert <literal char, int, float or double>" << std::endl;
        exit(1);
    }

    std::string str = argv[1];

    Converter holder(str);

    std::cout << "char: " << holder.convertToChar() << std::endl;
    std::cout << "int: " << holder.convertToInt() << std::endl;
    std::cout << "float: " << holder.convertToFloat() << std::endl;
    std::cout << "double: " << holder.convertToDouble() << std::endl;
}
