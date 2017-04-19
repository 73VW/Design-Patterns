#ifndef _ETATCOMMANDE_CPP
#define _ETATCOMMANDE_CPP

#include <iostream>
#include <string>
#include "Commande.cpp"

using namespace std;

class EtatCommande
{
public:
  virtual void traiter() = 0;
};

#endif /* _ETATCOMMANDE_CPP */
