#ifndef _COMMANDEENATTENTE_CPP
#define _COMMANDEENATTENTE_CPP

#include <iostream>
#include <string>
#include "EtatCommande.cpp"
#include "CommandePayee.cpp"

using namespace std;

class CommandeEnAttente: public EtatCommande
{
public:
  CommandeEnAttente(){
  }
  void traiter(){
    statut = 0;
    commande = new CommandePayee();
    commande->traiter();
  }

private:
  bool statut; // 0 si payée, 1 si envoyé
  EtatCommande* commande;
};

#endif /* _COMMANDEENATTENTE_CPP */
