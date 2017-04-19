#ifndef _COMMANDEPAYEE_CPP
#define _COMMANDEPAYEE_CPP

#include <iostream>
#include <string>
#include "EtatCommande.cpp"
#include "CommandeEnvoyee.cpp"

using namespace std;

class CommandePayee: public EtatCommande
{
public:
  CommandePayee(){
  }
  void traiter(){
    cout << "DONE" << endl;
    statut = 1;
    commande = new CommandeEnvoyee();
    this->commande->traiter();
  }

private:
  bool statut; // 0 si payée, 1 si envoyé
  EtatCommande* commande;
};

#endif /* _COMMANDEPAYEE_CPP */
