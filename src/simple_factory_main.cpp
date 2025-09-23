#include "simple_factory.h"

int main(){
    Factory f1;
    auto p1 = f1.createProduct(0);
    auto p2 = f1.createProduct(1);
    p1->show();
    p2->show();
    return 0;
}

