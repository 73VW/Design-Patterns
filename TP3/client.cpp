#include <iostream>
#include "menu.cpp"
#include "abstractFactory.cpp"
#include "cuissonFactory.cpp"
#include "potageFactory.cpp"
#include "saladeFactory.cpp"
#include "vapeurFactory.cpp"

using namespace std;
int main() {
    AbstractFactory *f = new SaladeFactory();
    Menu *men = new Menu(f);
    std::cout << men->toString()<<endl;
}
