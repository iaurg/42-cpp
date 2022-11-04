#include "Data.hpp"

int main(void)
{

    Data* data = new Data(42, '*', 42.05f, 42.5);

    std::cout << "data : " << *data << std::endl;
    std::cout << "data before PTR: " << data << std::endl;

    uintptr_t _raw = data->serialize(data);

    std::cout << "Raw: " << _raw << std::endl;

    Data* other = data->deserialize(_raw);

    std::cout << "data after PTR: " << data << std::endl;
    std::cout << "Data after deserialize: " << *other << std::endl;

    delete data;

    return 0;
}
