#include <memory>
#include <iostream>
using namespace std;
#include "abstract_factory.h"

void ChinaApple::show(){
    cout << "China apple" << endl;
}
void USAApple::show(){
    cout << "USA apple" << endl;
}
void JapanApple::show(){
    cout << "Japan apple" << endl;
}

void ChinaBanana::show(){
    cout << "China banana" << endl;
}
void USABanana::show(){
    cout << "USA banana" << endl;
}
void JapanBanana::show(){
    cout << "Japan banana" << endl;
}

void ChinaPear::show(){
    cout << "China pear" << endl;
}
void USAPear::show(){
    cout << "USA pear" << endl;
}
void JapanPear::show(){
    cout << "Japan pear" << endl;
}

unique_ptr<ABApple> ChinaFactory::createApple(){
    return make_unique<ChinaApple>();
}
unique_ptr<ABBanana> ChinaFactory::createBanana(){
    return make_unique<ChinaBanana>();
}
unique_ptr<ABPear> ChinaFactory::createPear(){
    return make_unique<ChinaPear>();
}

unique_ptr<ABApple> USAFactory::createApple(){
    return make_unique<USAApple>();
}
unique_ptr<ABBanana> USAFactory::createBanana(){
    return make_unique<USABanana>();
}
unique_ptr<ABPear> USAFactory::createPear(){
    return make_unique<USAPear>();
}

unique_ptr<ABApple> JapanFactory::createApple(){
    return make_unique<JapanApple>();
}
unique_ptr<ABBanana> JapanFactory::createBanana(){
    return make_unique<JapanBanana>();
}
unique_ptr<ABPear> JapanFactory::createPear(){
    return make_unique<JapanPear>();
}








