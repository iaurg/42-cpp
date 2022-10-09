#include "Sed.hpp"

int main(int argc, char** argv)
{
    if (argc != 4) {
        std::cerr << "Wrong Command: Use ./sedisforlosers <filename> <stringToFound> <stringReplace>" << std::endl;
        exit(1);
    }
    Sed newSed = Sed(argv[1], argv[2], argv[3]);
    newSed.run();
}
