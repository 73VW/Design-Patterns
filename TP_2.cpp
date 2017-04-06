#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include "Fruit.cpp"

using namespace std;

int main(int argc, char **argv)
{
  Fruit fraise = new Fruit("fraise",0);
  cout << fraise.toString() << endl;
}
