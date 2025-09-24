#include "../include/restaurant.h"

using namespace std;
int main() {
    // 创建厨师（Receiver）
    Chef* chef = new Chef();
    
    // 创建命令（Command）
    Command* kungPaoChickenCmd = new KungPaoChickenCmd(chef);
    Command* fishFlavoredShreddedPorkCmd = new FishFlavoredShreddedPorkCmd(chef);
    
    // 创建服务员（Invoker）
    Waiter* waiter = new Waiter();
    
    cout << "=== 餐厅点餐系统演示 ===" << endl;
    
    // 客户点餐
    cout << "客户点了宫保鸡丁" << endl;
    waiter->addCommand(kungPaoChickenCmd);
    
    cout << "客户点了鱼香肉丝" << endl;
    waiter->addCommand(fishFlavoredShreddedPorkCmd);
    
    // 提交订单
    waiter->submitOrder();
    
    // 清理资源
    delete chef;
    delete kungPaoChickenCmd;
    delete fishFlavoredShreddedPorkCmd;
    delete waiter;
    
    return 0;
}