#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include "commande.cpp"


using namespace std;

int main()
{
  Commande commande;
  commande.traiter();
}
