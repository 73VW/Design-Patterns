#ifndef _ABSTRACTFACTORY_CPP
#define _ABSTRACTFACTORY_CPP

#include <iostream>
#include "legumes.cpp"
#include "herbes.cpp"
#include "huiles.cpp"


class AbstractFactory {
 public:
     virtual Legumes* createLegumes() = 0;
     virtual Herbes* createHerbes() = 0;
     virtual Huiles* createHuiles() = 0;
};

#endif
