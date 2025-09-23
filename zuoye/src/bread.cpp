#include "../include/bread.h"

// 模板方法 bake() 的实现
void Bread::bake() {
    preheat();
    mix();
    bakeBread();
    cool();
}

// 预热步骤的默认实现
void Bread::preheat() {
    cout << "预热烤箱到180度" << endl;
}

// 冷却步骤的默认实现
void Bread::cool() {
    cout << "将面包从烤箱中取出并冷却" << endl;
}