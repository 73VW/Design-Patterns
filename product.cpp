#ifndef _PRODUCT_CPP
#define _PRODUCT_CPP

#include <iostream>
using namespace std;

// 1. "lowest common denominator"
class Product
{
  public:
    virtual string toString() = 0;
    virtual bool contientPepin() = 0;
};

#endif
