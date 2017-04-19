#ifndef _FRUIT_CPP
#define _FRUIT_CPP

#include <iostream>
#include <string>
#include "product.cpp"

using namespace std;

class Fruit: public Product
{
public:
    Fruit(){
        Fruit("empty", false);
    }

    Fruit(string name, bool pepin)
    {
        this->name = name;
        this->pepin = pepin;
    }

    ~Fruit();

    string toString()
    {
        return this->name;
    }
    bool contientPepin()
    {
        return this->pepin;
    }

private:
    string name;
    bool pepin;
};

#endif /* _FRUIT_CPP */
