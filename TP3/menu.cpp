#ifndef _MENU_CPP
#define _MENU_CPP

#include <iostream>
#include <string>
#include "huiles.cpp"
#include "legumes.cpp"
#include "herbes.cpp"
#include "abstractFactory.cpp"

using namespace std;

class Menu {
public:
    void construct(Factory *f){
        legume = f->createLegumes;
        huile = f->createHuiles;
        herbe = f->createHerbes;
    }

    string toString(){
        return "Ce menu contient les produits suivants:" + endl + legume->toString() + endl + huile->toString() + endl + herbe->toString();
    }
private:
    Legumes *legume;
    Huiles *huile;
    Herbes *herbe;
};

#endif
