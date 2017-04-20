#include <iostream>
#include <string>

using namespace std;

class Legumes {
public:
 virtual string toString() = 0;
};

class Aubergine : public Legumes
{
public:
    string toString(){
        return "Aubergine";
    }
};

class Courgette : public Legumes
{
public:
    string toString(){
        return "Courgette";
    }
};

class Christophine : public Legumes
{
public:
    string toString(){
        return "Christophine";
    }
};

class Manioc : public Legumes
{
public:
    string toString(){
        return "Manioc";
    }
};
