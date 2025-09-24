#include "../include/restaurant.h"

using namespace std;

// Chef类的实现
void Chef::cookKungPaoChicken() {
    cout << "厨师正在制作宫保鸡丁..." << endl;
}

void Chef::cookFishFlavoredShreddedPork() {
    cout << "厨师正在制作鱼香肉丝..." << endl;
}

// KungPaoChickenCmd类的实现
void KungPaoChickenCmd::execute() {
    chef->cookKungPaoChicken();
}

// FishFlavoredShreddedPorkCmd类的实现
void FishFlavoredShreddedPorkCmd::execute() {
    chef->cookFishFlavoredShreddedPork();
}

// Waiter类的实现
void Waiter::addCommand(Command* command) {
    orders.push_back(command);
}

void Waiter::submitOrder() {
    cout << "服务员提交订单给厨师：" << endl;
    for (Command* command : orders) {
        command->execute();
    }
    orders.clear();
}