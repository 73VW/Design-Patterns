#ifndef _POTAGEFACTORY_CPP
#define _POTAGEFACTORY_CPP

#include <iostream>
#include "legumes.cpp"
#include "herbes.cpp"
#include "huiles.cpp"
#include "abstractFactory.cpp"

class PotageFactory : public AbstractFactory
{
public:
public:
  Legumes* createLegumes(){
    return new Manioc();
  }

  Herbes* createHerbes(){
    return new Basilic();
  }

  Huiles* createHuiles(){
    return new Soja();
  }
};

#endif
