#ifndef _PANIER_CPP
#define _PANIER_CPP

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <string>
#include "fruit.cpp"

using namespace std;

class Panier : public Fruit
{
public:
  Panier()
  {
    panier = new Fruit("Banane", 0);
    panier[1]  = new Fruit("Pomme", 1);
    panier[2] = new Fruit("Fraise", 0);
    panier[3] = new Fruit("Fraise", 0);
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
  Fruit* panier[];
};
#endif /* _PANIER_CPP */
