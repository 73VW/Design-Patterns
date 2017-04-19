#ifndef _COMMANDEENATTENTE_CPP
#define _COMMANDEENATTENTE_CPP

#include <iostream>
#include <string>
#include "EtatCommande.cpp"

using namespace std;

class CommandeEnAttente : public EtatCommande
{
public:
  CommandeEnAttente(){
  }
  void traiter(){

  }

private:
  bool statut; // 0 si payée, 1 si envoyé
};

#endif /* _COMMANDEENATTENTE_CPP */
