#ifndef _COMMANDE_CPP
#define _COMMANDE_CPP

#include <iostream>
#include <string>
#include <EtatCommande>

using namespace std;

class Commande
{
public:
  Commande(){
    etat = new CommandeEnAttente();
    statut = 0;
  }
  void traiter();

private:
  EtatCommande* etat;
  bool statut; // 0 si payée, 1 si envoyé
};

#endif /* _COMMANDE_CPP */
