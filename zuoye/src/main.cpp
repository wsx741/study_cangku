#include "../include/calculator.h"
#include <iostream>

using namespace std;

int main() {
    // 创建基本计算器
    SimpleCalculator* simpleCalc = new SimpleCalculator();
    
    cout << "=== 基本计算器 ===" << endl;
    cout << "1.5 + 2.3 = " << simpleCalc->calculate(1.5, 2.3, "add") << endl;
    cout << "5.7 - 2.3 = " << simpleCalc->calculate(5.7, 2.3, "subtract") << endl;
    
    // 添加四舍五入功能
    cout << "\n=== 四舍五入装饰器 ===" << endl;
    RoundDecorator* roundCalc = new RoundDecorator(simpleCalc);
    cout << "1.5 + 2.3 = " << roundCalc->calculate(1.5, 2.3, "add") << endl;
    cout << "5.7 - 2.3 = " << roundCalc->calculate(5.7, 2.3, "subtract") << endl;
    
    // 添加日志功能
    cout << "\n=== 日志装饰器 ===" << endl;
    LoggingDecorator* loggingCalc = new LoggingDecorator(simpleCalc);
    loggingCalc->calculate(3.2, 4.8, "add");
    loggingCalc->calculate(10.5, 3.1, "subtract");
    
    // 组合装饰器：既有日志功能又有四舍五入功能
    cout << "\n=== 组合装饰器（日志+四舍五入） ===" << endl;
    RoundDecorator* roundCalc2 = new RoundDecorator(simpleCalc);
    LoggingDecorator* loggingRoundCalc = new LoggingDecorator(roundCalc2);
    loggingRoundCalc->calculate(3.2, 4.8, "add");
    loggingRoundCalc->calculate(10.5, 3.1, "subtract");
    
    // 清理内存
    delete simpleCalc;
    delete roundCalc;
    delete loggingCalc;
    delete roundCalc2;
    delete loggingRoundCalc;
    
    return 0;
}