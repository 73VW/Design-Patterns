#include <iostream>
#include "legumes.cpp"
#include "herbes.cpp"
#include "huiles.cpp"
#include "abstractFactory.cpp"

class CuissonFactory : public AbstractFactory
{
public:
  Legumes createLegumes(){
    return new Christophine();
  }

  Herbes createHerbes(){
    return new Persil();
  }

  Huiles createHuiles(){
    return new Olives();
  }
}
