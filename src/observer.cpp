#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#include "observer.h"

void WeatherStation::registerObserver(Observer *os){
    oss.push_back(os);
}
void WeatherStation::removeObserver(Observer *os){
    oss.erase(std::remove(oss.begin(), oss.end(), os), oss.end());
}
void WeatherStation::notifyObservers(){
    for(Observer *os : oss){
        os->update(te, hu);
    }
}
void WeatherStation::setData(double te, double hu){
    this->te = te;
    this->hu = hu;
    notifyObservers();
}

void OSA::update(double te, double hu){
    this->te = te;
    disp();
}
void OSA::disp(){
    cout << "te=" << te << endl;
}

void OSB::update(double te, double hu){
    this->hu = hu;
    disp();
}
void OSB::disp(){
    cout << "hu=" << hu << endl;
}
//观察者模式





