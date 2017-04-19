#ifndef _PANIER_CPP
#define _PANIER_CPP

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <string>
#include <vector>

#include "fruit.cpp"
#include "product.cpp"

using namespace std;

class Panier : public Product
{

private:
    vector < Product * > products;


public:
    Panier(){}

    ~Panier();


    bool contientPepin(){

         for (unsigned int i = 0; i < products.size(); i++)
        // 5. Use polymorphism to delegate to children
          if(products[i]->contientPepin()==1){
            return true;
          }
          return false;
    }

    void add(Product *ele)
    {
        products.push_back(ele);
    }

    string toString()
    {
        string panierToString;
        for (unsigned int i = 0; i < products.size(); i++){
          panierToString += products[i]->toString() + "\n";
        }
        return panierToString;
    }
};
#endif /* _PANIER_CPP */
