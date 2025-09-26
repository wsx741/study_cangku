#ifndef DISCOUNT_H
#define DISCOUNT_H

class DiscountStrategy {
public:
    virtual ~DiscountStrategy() {}
    virtual double applyDiscount(double originalPrice) = 0;
};

class PercentageDiscount : public DiscountStrategy {
private:
    double percentage;

public:
    PercentageDiscount(double percentage);
    double applyDiscount(double originalPrice) override;
};

class FixedDiscount : public DiscountStrategy {
private:
    double amount;

public:
    FixedDiscount(double amount);
    double applyDiscount(double originalPrice) override;
};

class CouponDiscount : public DiscountStrategy {
private:
    double threshold;
    double discountAmount;

public:
    CouponDiscount(double threshold, double discountAmount);
    double applyDiscount(double originalPrice) override;
};

class DiscountContext {
private:
    DiscountStrategy* strategy;

public:
    DiscountContext();
    void setStrategy(DiscountStrategy* newStrategy);
    double calculateFinalPrice(double originalPrice);
};

#endif