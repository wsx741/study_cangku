#include <memory>
#include <iostream>
using namespace std;
#include "factory_method.h"

void ProductA::show(){
    cout << "Product A" << endl;
}

void ProductB::show(){
    cout << "Product B" << endl;
}

unique_ptr<AbstractProduct> FactoryA::createProduct(){
    return make_unique<ProductA>();
}

unique_ptr<AbstractProduct> FactoryB::createProduct(){
    return make_unique<ProductB>();
}









