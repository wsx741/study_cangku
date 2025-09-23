#include <iostream>
using namespace std;
#include "strategy.h"

void WeChatPay::pay(){
    cout << "WeChat pay" << endl;
}
void AiliPay::pay(){
    cout << "Alili pay" << endl;
}
void CashPay::pay(){
    cout << "Cash pay" << endl;
}

PayContext::PayContext(Pay *pay)
    : pay(pay)
{}
void PayContext::setPay(Pay *pay){
    this->pay = pay;
}
void PayContext::exec(){
    pay->pay();
}










