#include <iostream>

/*
 * Reference are similar to pointers. They are used to refer to a variable that has already been declared.
 * A reference variable is declared by putting an & in front of the variable name. Act like an alias.
 * A reference is declared to a value that cannot be changed and is always initialized when declared.
 * A pointer can be declared to a value that can be changed and is not initialized when declared.
 */

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "Memory address of str: " << &str << std::endl;
    std::cout << "Memory address of stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address of stringREF: " << &stringREF << std::endl;

    std::cout << "Value of str: " << str << std::endl;
    std::cout << "Value of stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value of stringREF: " << stringREF << std::endl;
    return 0;
}
