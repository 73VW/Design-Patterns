#include <iostream>
#include <string>

using namespace std;

class Herbes {
public:
 virtual string toString() = 0;
};

class Persil : public Herbes
{
public:
    string toString(){
        return "Persil";
    }
};

class Basilic : public Herbes
{
public:
    string toString(){
        return "Basilic";
    }
};

class Provence : public Herbes
{
public:
    string toString(){
        return "Herbes de Provence";
    }
};

class Romarin : public Herbes
{
public:
    string toString(){
        return "Romarin";
    }
};
