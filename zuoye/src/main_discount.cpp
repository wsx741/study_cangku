#include <iostream>
#include "discount.h"

using namespace std;

int main() {
    DiscountContext context;
    
    double originalPrice;
    cout << "请输入商品原价: ";
    cin >> originalPrice;
    
    int choice;
    cout << "请选择折扣类型:\n";
    cout << "1. 百分比折扣\n";
    cout << "2. 固定金额折扣\n";
    cout << "3. 优惠券折扣\n";
    cout << "请输入选择(1-3): ";
    cin >> choice;
    
    double finalPrice = originalPrice;
    
    switch (choice) {
        case 1: {
            double percentage;
            cout << "请输入折扣百分比(例如输入10表示10%): ";
            cin >> percentage;
            PercentageDiscount* percentageDiscount = new PercentageDiscount(percentage);
            context.setStrategy(percentageDiscount);
            finalPrice = context.calculateFinalPrice(originalPrice);
            cout << "使用百分比折扣后价格: " << finalPrice << endl;
            delete percentageDiscount;
            break;
        }
        case 2: {
            double amount;
            cout << "请输入减免金额: ";
            cin >> amount;
            FixedDiscount* fixedDiscount = new FixedDiscount(amount);
            context.setStrategy(fixedDiscount);
            finalPrice = context.calculateFinalPrice(originalPrice);
            cout << "使用固定金额折扣后价格: " << finalPrice << endl;
            delete fixedDiscount;
            break;
        }
        case 3: {
            double threshold, discountAmount;
            cout << "请输入满足优惠券的最低金额: ";
            cin >> threshold;
            cout << "请输入优惠券减免金额: ";
            cin >> discountAmount;
            CouponDiscount* couponDiscount = new CouponDiscount(threshold, discountAmount);
            context.setStrategy(couponDiscount);
            finalPrice = context.calculateFinalPrice(originalPrice);
            cout << "使用优惠券折扣后价格: " << finalPrice << endl;
            delete couponDiscount;
            break;
        }
        default:
            cout << "无效选择，按原价计算" << endl;
            break;
    }
    
    return 0;
}