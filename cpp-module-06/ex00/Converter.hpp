#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <cstdlib>
#include <iostream>
#include <string>

class Converter {

public:
    Converter(std::string str);
    Converter(Converter const& src);
    ~Converter();

    Converter& operator=(Converter const& rhs);
    std::string getInput() const;
    std::string convertToChar(void);
    int convertToInt(void);
    float convertToFloat(void);
    double convertToDouble(void);

private:
    std::string _input;
};

#endif /* ******************************************************* CONVERTER_H */
