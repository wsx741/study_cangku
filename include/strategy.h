#ifndef STRATEGY_H
#define STRATEGY_H

class Pay{
    public:
        virtual ~Pay() = default;
        virtual void pay() = 0;
};

class WeChatPay : public Pay{
    public:
        void pay() override;
};
class AiliPay : public Pay{
    public:
        void pay() override;
};
class CashPay : public Pay{
    public:
        void pay() override;
};

class PayContext{
    public:
        PayContext(Pay *pay);
        void setPay(Pay *pay);
        void exec();

    protected:
        Pay *pay;
};



#endif







