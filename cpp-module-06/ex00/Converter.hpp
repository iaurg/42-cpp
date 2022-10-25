#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <bits/stdc++.h>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>

class Converter {

public:
    Converter(std::string str);
    Converter(Converter const& src);
    ~Converter();
    Converter& operator=(Converter const& rhs);

    std::string getInput() const;
    void convertToChar(void);
    void convertToInt(void);
    void convertToFloat(void);
    void convertToDouble(void);

private:
    std::string _input;
};

#endif /* ******************************************************* CONVERTER_H */
