#include "singleten.h"
#include <iostream>
#include <mutex>
using namespace std;

A *A::obj = nullptr;
mutex *A::lock = new mutex;
A *A::getObject(){
    lock->lock();
    if(obj == nullptr)
        obj = new A;
    lock->unlock();
    return obj;
}

void A::show(){
    cout << "A" << endl;
}

B &B::getObject(){
    static B b;
    return b;
}

C *C::obj = new C;

C *C::getObject(){
    return obj;
}

void C::show(){
    cout << "C" << endl;
}












