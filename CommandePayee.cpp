#ifndef _COMMANDEENVOYEE_CPP
#define _COMMANDEENVOYEE_CPP

#include <iostream>
#include <string>
#include <EtatCommande>

using namespace std;

class CommandePayee : public EtatCommande
{
public:
  CommandePayee(){
  }
  void traiter(){
    cout << "DONE" << endl;
    statut = 1;
  }

private:
  bool statut; // 0 si payée, 1 si envoyé
};

#endif /* _COMMANDEENVOYEE_CPP */
