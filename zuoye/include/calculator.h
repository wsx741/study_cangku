#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <string>
#include <iostream>
#include <cmath>
#include <stdexcept>
using namespace std;

// Calculator基类
class Calculator {
public:
    virtual ~Calculator() = default;
    virtual double calculate(double a, double b, const string& operation) = 0;
};

// SimpleCalculator类，实现基本的加法和减法计算
class SimpleCalculator : public Calculator {
public:
    double calculate(double a, double b, const string& operation) override;
};

// RoundDecorator类，对计算结果进行四舍五入
class RoundDecorator : public Calculator {
private:
    Calculator* calculator;

public:
    explicit RoundDecorator(Calculator* calc);
    double calculate(double a, double b, const string& operation) override;
};

// LoggingDecorator类，记录计算过程中的输入和输出
class LoggingDecorator : public Calculator {
private:
    Calculator* calculator;

public:
    explicit LoggingDecorator(Calculator* calc);
    double calculate(double a, double b, const string& operation) override;
};

#endif // CALCULATOR_H