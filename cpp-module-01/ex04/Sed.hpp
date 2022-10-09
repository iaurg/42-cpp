#ifndef SED_HPP
#define SED_HPP

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

class Sed {

public:
    Sed(std::string filename, std::string s1, std::string s2);
    ~Sed();
    void run(void);

private:
    int _readFile();
    int _writeFile(std::string newFileContent);
    std::string _changeFileExtension(std::string filename);
    std::string _replaceString(std::string s1, std::string s2, std::string fileContent);
    std::string _fileName;
    std::string _fileContent;
    std::string _string1;
    std::string _string2;
};

#endif /* ************************************************************* SED_H */
