#include "../include/calculator.h"

// SimpleCalculator类实现
double SimpleCalculator::calculate(double a, double b, const string& operation) {
    if (operation == "add") {
        return a + b;
    } else if (operation == "subtract") {
        return a - b;
    } else {
        throw std::invalid_argument("Unsupported operation: " + operation);
    }
}

// RoundDecorator类实现
RoundDecorator::RoundDecorator(Calculator* calc) : calculator(calc) {
}

double RoundDecorator::calculate(double a, double b, const string& operation) {
    double result = calculator->calculate(a, b, operation);
    return round(result);
}

// LoggingDecorator类实现
LoggingDecorator::LoggingDecorator(Calculator* calc) : calculator(calc) {
}

double LoggingDecorator::calculate(double a, double b, const string& operation) {
    double result = calculator->calculate(a, b, operation);
    cout << "计算: " << a << " " << operation << " " << b << " = " << result << endl;
    return result;
}