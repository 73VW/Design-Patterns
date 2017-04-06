#ifndef _FRUITDECORATOR_CPP
#define _FRUITDECORATOR_CPP

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string>
#include "fruit.cpp"
#include "product.cpp"

using namespace std;

class FruitDecorator: public Product
{

private:
    Product* fr;

public:
    FruitDecorator(Product* frs)
    {
        this->fr = frs;
    }
    ~FruitDecorator();
    string toString(){
        return this->fr->toString();
    }
    bool contientPepin(){
        return this->fr->contientPepin();
    }
 };

#endif
