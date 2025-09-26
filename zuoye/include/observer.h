#ifndef OBSERVER_H
#define OBSERVER_H

#include <string>
#include <vector>

using namespace std;

// 前向声明
class Observer;

// Subject类 - 被观察者
class Subject {
private:
    vector<Observer*> observers;
    string state;

public:
    void setState(string newState);
    string getState();
    void attach(Observer* observer);
    void detach(Observer* observer);
    void notify();
};

// Observer接口 - 观察者基类
class Observer {
protected:
    string name;
    Subject* subject;

public:
    Observer(string name, Subject* subject);
    virtual ~Observer() {}
    virtual void update() = 0;
};

// 具体观察者实现类
class ConcreteObserver : public Observer {
public:
    ConcreteObserver(string name, Subject* subject);
    void update() override;
};

#endif