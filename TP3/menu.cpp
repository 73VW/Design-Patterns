#ifndef _MENU_CPP
#define _MENU_CPP

#include <iostream>
#include <string>
#include "huiles.cpp"
#include "legumes.cpp"
#include "herbes.cpp"
#include "abstractFactory.cpp"


class Menu {
public:
    Menu(AbstractFactory *f){
        factory=f;
        construct();
    }
    void construct(){
        legume = factory->createLegumes();
        huile = factory->createHuiles();
        herbe = factory->createHerbes();
    }

    std::string toString(){
        std::string temp = "Ce menu contient les produits suivants:\n" + legume->toString() + "\r\n" + huile->toString() + "\r\n" + herbe->toString();
        return temp;
    }
private:
    Legumes *legume;
    Huiles *huile;
    Herbes *herbe;
    AbstractFactory *factory;
};

#endif
