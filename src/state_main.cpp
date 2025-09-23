#include "state.h"

int main(){
    LightOFF lf;
    LightON lo;
    LightContext lc(&lf);
    lc.exec();
    lc.setState(&lo);
    lc.exec();
    return 0;
}
