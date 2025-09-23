#include "factory_method.h"

int main(){
    FactoryA f1;
    auto p1 = f1.createProduct();
    FactoryB f2;
    auto p2 = f2.createProduct();
    p1->show();
    p2->show();
    return 0;
}
