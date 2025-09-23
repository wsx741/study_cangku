#include "abstract_factory.h"

int main(){
    ChinaFactory f1;
    auto p1 = f1.createApple();
    auto p2 = f1.createBanana();
    auto p3 = f1.createPear();

    p1->show();
    p2->show();
    p3->show();


    return 0;
}

