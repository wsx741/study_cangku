#include "decorator.h"
#include <iostream>
using namespace std;

int main(){
    Coffee *p1 = new Milk(new CoffeeA());
    Coffee *p2 = new Sugar(new Sugar(new CoffeeB()));
    cout << "p1 desc: " << p1->desc() << endl;
    cout << "p1 cost: " << p1->cost() << endl;
    cout << "p2 desc: " << p2->desc() << endl;
    cout << "p2 cost: " << p2->cost() << endl;
    delete p1;
    delete p2;
    return 0;
}
