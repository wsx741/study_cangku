#include "strategy.h"

int main(){
    WeChatPay wcp;
    AiliPay ap;
    CashPay cp;
    PayContext pc(&wcp);
    pc.exec();
    pc.setPay(&ap);
    pc.exec();
    return 0;
}
