#include <iostream>
#include <string>

using namespace std;

class Huiles {
public:
 virtual string toString() = 0;
};

class Olives : public Huiles
{
public:
    string toString(){
        return "Huile d'Olives";
    }
};

class Soja : public Huiles
{
public:
    string toString(){
        return "Huile de Soja";
    }
};

class Palme : public Huiles
{
public:
    string toString(){
        return "Huile de Palme";
    }
};

class Tournesol : public Huiles
{
public:
    string toString(){
        return "Huile de Tournesol";
    }
};
