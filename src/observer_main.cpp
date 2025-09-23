#include "observer.h"
#include <iostream>
using namespace std;

int main(){
    WeatherStation ws;
    OSA osa;
    OSB osb;
    ws.registerObserver(&osa);
    ws.setData(25.5, 35);
    cout << "-----------------------" << endl;
    ws.registerObserver(&osb);
    ws.setData(30.3, 42.4);

    return 0;
}
