#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <string>
#include "Fruit.cpp"

using namespace std;

class Panier
{
public:
  Panier()
  {
    panier[0] = new Fruit("Banane", false);
    panier[1] = new Fruit("Pomme", true);
    panier[2] = new Fruit("Fraise", false);
    panier[3] = new Fruit("Fraise", false);
  }

  ~Panier();

  bool contientPepin()
  {
    for (int i = 0; i<4;i++)
    {
      if(panier[i]->contientPepin())
      {
        return true;
      }
      return false;
    }
  }

private:
  Fruit *panier[];
};
