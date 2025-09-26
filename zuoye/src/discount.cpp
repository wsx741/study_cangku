#include "discount.h"
#include <algorithm>

using namespace std;

// PercentageDiscount implementation
PercentageDiscount::PercentageDiscount(double percentage) : percentage(percentage) {}

double PercentageDiscount::applyDiscount(double originalPrice) {
    return originalPrice * (1 - percentage / 100);
}

// FixedDiscount implementation
FixedDiscount::FixedDiscount(double amount) : amount(amount) {}

double FixedDiscount::applyDiscount(double originalPrice) {
    return max(0.0, originalPrice - amount);
}

// CouponDiscount implementation
CouponDiscount::CouponDiscount(double threshold, double discountAmount) 
    : threshold(threshold), discountAmount(discountAmount) {}

double CouponDiscount::applyDiscount(double originalPrice) {
    if (originalPrice >= threshold) {
        return originalPrice - discountAmount;
    }
    return originalPrice;
}

// DiscountContext implementation
DiscountContext::DiscountContext() : strategy(nullptr) {}

void DiscountContext::setStrategy(DiscountStrategy* newStrategy) {
    this->strategy = newStrategy;
}

double DiscountContext::calculateFinalPrice(double originalPrice) {
    if (strategy) {
        return strategy->applyDiscount(originalPrice);
    }
    return originalPrice;
}