#include "../include/bread.h"

int main() {
    cout << "=== 制作白面包 ===" << endl;
    WhiteBread whiteBread;
    whiteBread.bake();
    
    cout << "\n=== 制作全麦面包 ===" << endl;
    WholeWheatBread wholeWheatBread;
    wholeWheatBread.bake();
    
    return 0;
}