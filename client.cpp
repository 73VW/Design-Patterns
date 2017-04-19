#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include "product.cpp"
#include "fruit.cpp"
#include "fruitDecorator.cpp"
#include "bracesFruitDecorator.cpp"
#include "chevronFruitDecorator.cpp"
#include "slashFruitDecorator.cpp"
#include "panier.cpp"

using namespace std;

int main()
{
  Product *fraise = new SlashFruitDecorator(new Fruit("fraise",0));
  //Product panier = new Panier();
  //cout << panier->contientPepin() << endl;
  cout << fraise->toString() << endl;
}
