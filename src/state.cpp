#include <iostream>
using namespace std;
#include "state.h"

void LightOFF::pressButton(){
    cout << "Light is Off, now turn on.";
}

void LightON::pressButton(){
    cout << "Light is On, now turn off.";
}

LightContext::LightContext(LightState *s)
    : s(s)
{}
void LightContext::setState(LightState *s){
    this->s = s;
}
void LightContext::exec(){
    s->pressButton();
}





