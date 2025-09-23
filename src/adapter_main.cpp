#include "adapter.h"
#include <memory>
using namespace std;

int main(){
    Adaptee ad;
    //Target *p = new Adapter(&ad);
    unique_ptr<Target> p = make_unique<Adapter>(&ad);
    p->test();
    return 0;
}
