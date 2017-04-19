#ifndef _COMMANDEENVOYEE_CPP
#define _COMMANDEENVOYEE_CPP

#include <iostream>
#include <string>
#include <EtatCommande>

using namespace std;

class CommandeEnvoyee : public EtatCommande
{
public:
  CommandeEnvoyee(){
  }
  void traiter(){
    cout << "SENT" << endl;
  }

private:
  bool statut; // 0 si payée, 1 si envoyé
};

#endif /* _COMMANDEENVOYEE_CPP */
