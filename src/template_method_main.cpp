#include "template_method.h"

int main(){
    Calc *c1 = new AddCalc;
    Calc *c2 = new SubCalc;
    c1->run();
    c2->run();
    delete c1;
    delete c2;
    return 0;
}
