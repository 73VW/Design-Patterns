#ifndef _CHEVRONFRUITDECORATOR_CPP
#define _CHEVRONFRUITDECORATOR_CPP

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string>
#include "fruit.cpp"
#include "fruitDecorator.cpp"

using namespace std;

class ChevronFruitDecorator: public FruitDecorator
{
 public:
   // 6. Optional embellishment
   ChevronFruitDecorator(Fruit *fr): FruitDecorator(fr){}

   string toString(){
       string str ="<";
       str += FruitDecorator::toString();
       str += "/";
       if(FruitDecorator::contientPepin())
            str += "Avec pepin";
        else
            str += "Sans pepin";
        str += ">";
       return str;
   }
};

#endif
