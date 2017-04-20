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
  Product *fraise = new SlashFruitDecorator(new Fruit("fraise",true));
  Panier *panier = new Panier();
  panier->add(new Fruit("banane", false));
  panier->add(new BracesFruitDecorator(new Fruit("pomme", true)));
  panier->add(new ChevronFruitDecorator(new Fruit("poire", false)));
  panier->add(fraise);

  cout << panier->toString() << endl;
}
