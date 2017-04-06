#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <string>

using namespace std;

class Fruit
{
public:
  Fruit(string name, bool pepin)
  {
    this->name = name;
    this->pepin = pepin;
  }

  ~Fruit();

  string toString()
  {
    return this->name;
  }
  bool contientPepin()
  {
    return this->pepin;
  }

private:
  string name;
  bool pepin;
};
