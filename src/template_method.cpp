#include <iostream>
using namespace std;
#include "template_method.h"

void Calc::run(){
    input();
    exec();
    show();
}
void Calc::input(){
    cout << "请输入a，b的值：";
    cin >> a >> b;
}
void Calc::show(){
    cout << "计算的结果是：" << res << endl;
}

void AddCalc::exec(){
    res = a + b;
}

void SubCalc::exec(){
    res = a - b;
}






