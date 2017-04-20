#ifndef _SLASHFRUITDECORATOR_CPP
#define _SLASHFRUITDECORATOR_CPP

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string>
#include "fruit.cpp"
#include "fruitDecorator.cpp"

using namespace std;

class SlashFruitDecorator: public FruitDecorator
{
 public:
   SlashFruitDecorator(Fruit *fr): FruitDecorator(fr){}

   string toString(){
       string str ="/";
       str += FruitDecorator::toString();
       str += "/";
       if(FruitDecorator::contientPepin())
            str += "Avec pepins";
        else
            str += "Sans pepins";
        str += "/";
       return str;
   }
};

#endif
