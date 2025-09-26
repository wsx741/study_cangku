#include "observer.h"
#include <iostream>

using namespace std;

// Subject类实现
void Subject::setState(string newState) {
    this->state = newState;
    notify();
}

string Subject::getState() {
    return state;
}

void Subject::attach(Observer* observer) {
    observers.push_back(observer);
}

void Subject::detach(Observer* observer) {
    for (auto it = observers.begin(); it != observers.end(); ++it) {
        if (*it == observer) {
            observers.erase(it);
            break;
        }
    }
}

void Subject::notify() {
    for (Observer* observer : observers) {
        observer->update();
    }
}

// Observer类实现
Observer::Observer(string name, Subject* subject) : name(name), subject(subject) {}

// ConcreteObserver类实现
ConcreteObserver::ConcreteObserver(string name, Subject* subject) 
    : Observer(name, subject) {}

void ConcreteObserver::update() {
    cout << "Observer " << name << " received update. New state: " << subject->getState() << endl;
}