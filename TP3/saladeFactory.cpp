#ifndef _SALADEFACTORY_CPP
#define _SALADEFACTORY_CPP

#include <iostream>
#include "legumes.cpp"
#include "herbes.cpp"
#include "huiles.cpp"
#include "abstractFactory.cpp"

class SaladeFactory : public AbstractFactory
{
public:
  Legumes* createLegumes(){
    return new Aubergine();
  }

  Herbes* createHerbes(){
    return new Romarin();
  }

  Huiles* createHuiles(){
    return new Palme();
  }
};
#endif
