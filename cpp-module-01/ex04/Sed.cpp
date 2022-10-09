#include "Sed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Sed::Sed(std::string filename, std::string s1, std::string s2)
{
    this->_fileName = filename;
    this->_string1 = s1;
    this->_string2 = s2;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Sed::~Sed()
{
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string Sed::_replaceString(std::string s1, std::string s2, std::string fileContent)
{
    int i = 0;
    std::string newFileContent;

    while (fileContent[i]) {
        if (fileContent.substr(i, s1.length()) == s1) {
            newFileContent += s2;
            i += s1.length();
        } else {
            newFileContent += fileContent[i];
            i++;
        }
    }
    return newFileContent;
}

std::string Sed::_changeFileExtension(std::string filename)
{
    std::string newFileName;
    newFileName = filename.substr(0, filename.find(".")) + ".replace";
    return newFileName;
}

int Sed::_writeFile(std::string newFileContent)
{
    std::ofstream file;
    std::string newFileName = this->_changeFileExtension(this->_fileName);
    file.open(newFileName.c_str());
    if (file.fail())
        return (1);
    file << newFileContent;
    file.close();
    return 0;
}

int Sed::_readFile()
{
    std::ifstream file(this->_fileName.c_str());
    std::string fileContent;

    if (file.fail())
        return (1);
    std::stringstream buffer;
    buffer << file.rdbuf();
    fileContent = buffer.str();
    this->_fileContent = fileContent;
    file.close();
    return (0);
}

void Sed::run(void)
{
    if (this->_readFile()) {
        std::cerr << "Error: File " << this->_fileName << " could not be opened" << std::endl;
        exit(1);
    }
    std::string newFileContent = this->_replaceString(this->_string1, this->_string2, this->_fileContent);
    if (this->_writeFile(newFileContent)) {
        std::cerr << "Error: Writing file " << this->_fileName << std::endl;
        exit(1);
    }
}

/* ************************************************************************** */
