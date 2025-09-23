#include "singleten_factory.h"

int main(){
    auto p1 = Factory::getObject()->createProduct(0);
    auto p2 = Factory::getObject()->createProduct(1);
    p1->show();
    p2->show();
    return 0;
}
