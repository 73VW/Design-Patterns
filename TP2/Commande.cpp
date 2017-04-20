#ifndef _COMMANDE_CPP
#define _COMMANDE_CPP

#include <iostream>
#include <string>
#include "CommandeEnAttente.cpp"

using namespace std;

class Commande
{
public:
  Commande(){
    etat = new CommandeEnAttente();
  }
  void traiter()
  {
    this->etat->traiter();
  }

private:
  EtatCommande* etat;
  bool statut; // 0 si payée, 1 si envoyé
};

#endif /* _COMMANDE_CPP */
