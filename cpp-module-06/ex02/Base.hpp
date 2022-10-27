#ifndef BASE_HPP
#define BASE_HPP

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <math.h>
#include <string>

class Base {
public:
    virtual ~Base();
};

class A : public Base {
};

class B : public Base {
};

class C : public Base {
};

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

#endif /* ******************************************************** BASE_H */
