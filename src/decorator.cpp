#include <string>
using namespace std;
#include "decorator.h"

string CoffeeA::desc(){
    return "Coffee A";
}
double CoffeeA::cost(){
    return 5;
}

string CoffeeB::desc(){
    return "Coffee B";
}
double CoffeeB::cost(){
    return 7.5;
}

CoffeeDecorator::CoffeeDecorator(Coffee *c)
    : c(c)
{}
CoffeeDecorator::~CoffeeDecorator(){
    if(c){
        delete c;
        c = nullptr;
    }
}

Milk::Milk(Coffee *c)
    : CoffeeDecorator(c)
{}
string Milk::desc(){
    return c->desc() + " ,Milk";
}
double Milk::cost(){
    return c->cost() + 1.5;
}

Sugar::Sugar(Coffee *c)
    : CoffeeDecorator(c)
{}
string Sugar::desc(){
    return c->desc() + " ,Sugar";
}
double Sugar::cost(){
    return c->cost() + 0.5;
}






