#include <iostream>
#include "observer.h"

using namespace std;

int main() {
    // 创建被观察者
    Subject* subject = new Subject();
    
    // 创建观察者
    ConcreteObserver* observer1 = new ConcreteObserver("Observer1", subject);
    ConcreteObserver* observer2 = new ConcreteObserver("Observer2", subject);
    ConcreteObserver* observer3 = new ConcreteObserver("Observer3", subject);
    
    // 注册观察者
    cout << "注册观察者..." << endl;
    subject->attach(observer1);
    subject->attach(observer2);
    subject->attach(observer3);
    
    // 改变状态，观察者会收到通知
    cout << "\n改变状态为 'State1'..." << endl;
    subject->setState("State1");
    
    cout << "\n改变状态为 'State2'..." << endl;
    subject->setState("State2");
    
    // 注销一个观察者
    cout << "\n注销观察者 Observer2..." << endl;
    subject->detach(observer2);
    
    // 再次改变状态
    cout << "\n改变状态为 'State3'..." << endl;
    subject->setState("State3");
    
    // 清理资源
    delete observer1;
    delete observer2;
    delete observer3;
    delete subject;
    
    return 0;
}