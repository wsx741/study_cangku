#include "adapter.h"
#include <iostream>
using namespace std;

//源接口
void Adaptee::check(){
    cout << "Adaptee check" << endl;
}

//适配器
Adapter::Adapter(Adaptee *ad)
    : ad(ad)
{}
void Adapter::test(){
    ad->check();
}

