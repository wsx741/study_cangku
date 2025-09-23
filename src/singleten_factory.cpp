#include <memory>
#include <iostream>
using namespace std;
#include "singleten_factory.h"
Factory *Factory::obj = new Factory;
void ProductA::show(){
    cout << "Product A" << endl;
}

void ProductB::show(){
    cout << "Product B" << endl;
}

Factory *Factory::getObject(){
    return obj;
}

unique_ptr<AbstractProduct> Factory::createProduct(int type){
    if(type == 0)
        return make_unique<ProductA>();
    else if(type == 1)
        return make_unique<ProductB>();
    else
        return nullptr;
}










