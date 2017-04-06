#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string>

using namespace std;

class Fruit
{
public:
  Fruit();
  string toString();
  bool contientPepin();

private:
  string name;
  bool pepin;
  }
