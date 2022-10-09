#include <fstream>
#include <iostream>
#include <sstream>

// A program that takes a filename, string1 and string2 as arguments and replaces all occurrences of string1 in the file with string2.
/*
    1. Open file
    2. Read file
    3. Replace string1 with string2
    4. Write to file
    5. Remove file extension and add .replace
    6. Close file
*/

std::string replaceString(std::string s1, std::string s2, std::string fileContent)
{
    int i = 0;
    std::string newFileContent;

    while (fileContent[i] != '\0') {
        if (fileContent[i] == s1[0]) {
            int j = 0;
            while (s1[j] != '\0') {
                if (fileContent[i + j] != s1[j]) {
                    break;
                }
                j++;
            }
            if (s1[j] == '\0') {
                newFileContent += s2;
                i += j;
            }
        }
        newFileContent += fileContent[i];
        i++;
    }
    return newFileContent;
}

int main(int argc, char** argv)
{
    if (argc != 4) {
        std::cout << "Command: ./sedisforlosers <filename> <stringToFound> <stringReplace>" << std::endl;
        return (1);
    }

    std::string fileName = argv[1];
    std::string string1 = argv[2];
    std::string string2 = argv[3];
    std::stringstream buffer;
    std::fstream userFile;
    std::string newFileName = fileName + ".replace";

    userFile.open(fileName.c_str());
    if (userFile.bad()) {
        std::cerr << "Error: File " << fileName << " could not be opened" << std::endl;
        return (1);
    }

    buffer << userFile.rdbuf();
    std::string fileContent = buffer.str();
    userFile.close();

    std::string newFileContent = replaceString(string1, string2, fileContent);

    std::ofstream outfile(newFileName.c_str());

    if (outfile.bad()) {
        std::cerr << "Error: File " << newFileName << " could not be executed" << std::endl;
        return (1);
    }

    outfile << newFileContent << std::endl;

    outfile.close();
}
