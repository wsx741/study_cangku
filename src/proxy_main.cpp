#include "proxy.h"
#include <iostream>
using namespace std;

int main(){
    Image *i1 = new ImageReady("1.jpg");
    cout << "-----------------" << endl;
    i1->dispImage();
    cout << "*****************" << endl;
    Image *i2 = new ImageProxy("1.jpg");
    cout << "-----------------" << endl;
    i2->dispImage();
    cout << "*****************" << endl;
    return 0;
}
