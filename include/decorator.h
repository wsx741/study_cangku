#ifndef DECORATOR_H
#define DECORATOR_H
#include <string>
class Coffee{
    public:
        virtual ~Coffee() = default;
        virtual std::string desc() = 0;
        virtual double cost() = 0;
};

class CoffeeA : public Coffee{
    public:
        std::string desc() override;
        double cost() override;
};

class CoffeeB : public Coffee{
    public:
        std::string desc() override;
        double cost() override;
};

class CoffeeDecorator : public Coffee{
    protected:
        Coffee *c = nullptr;

    public:
        CoffeeDecorator(Coffee *c);
        virtual ~CoffeeDecorator();
};

class Milk : public CoffeeDecorator{
    public:
        Milk(Coffee *c);
        std::string desc();
        double cost();
};

class Sugar : public CoffeeDecorator{
    public:
        Sugar(Coffee *c);
        std::string desc();
        double cost();
};

#endif










