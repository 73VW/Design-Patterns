#include <iostream>
#include "menu.cpp"
#include "abstractFactory.cpp";
#define LINUX

using namespace std;
int main() {
    Factory *f = new CuissonFactory();
    Menu *men = new Menu(f);

    std::cout << men->toString()<<endl();
}
