#include "Converter.hpp"

int main(int argc, char** argv)
{
    if (argc != 2) {
        std::cerr << "Wrong Command: Use ./convert <literal char, int, float or double>" << std::endl;
        exit(1);
    }

    std::string str = argv[1];

    Converter holder(str);

    holder.convertToChar();
    holder.convertToInt();
    holder.convertToFloat();
    holder.convertToDouble();
}
