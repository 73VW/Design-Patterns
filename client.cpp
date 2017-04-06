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

using namespace std;

int main()
{
  Product *fraise = new SlashFruitDecorator(new Fruit("fraise",0));
  cout << fraise->toString() << endl;
}
