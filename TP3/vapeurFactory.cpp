#ifndef _VAPEURFACTORY_CPP
#define _VAPEURFACTORY_CPP

#include <iostream>
#include "legumes.cpp"
#include "herbes.cpp"
#include "huiles.cpp"
#include "abstractFactory.cpp"

class VapeurFactory : public AbstractFactory
{
public:
  Legume* createLegumes(){
    return new Courgette();
  }

  Herbes* createHerbes(){
    return new Provence();
  }

  Huiles* createHuiles(){
    return new Tournesol();
  }
};
#endif
