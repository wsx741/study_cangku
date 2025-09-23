#ifndef FACTORY_METHOD_H
#define FACTORY_METHOD_H
#include <memory>

class AbstractProduct{
    public:
        virtual ~AbstractProduct() = default;
        virtual void show() = 0;
};

class ProductA : public AbstractProduct{
    public:
        void show() override;
};

class ProductB : public AbstractProduct{
    public:
        void show() override;
};

class AbstractFactory{
    public:
        virtual ~AbstractFactory() = default;
        virtual std::unique_ptr<AbstractProduct> createProduct() = 0;
};

class FactoryA : public AbstractFactory{
    public:
        std::unique_ptr<AbstractProduct> createProduct() override;
};

class FactoryB : public AbstractFactory{
    public:
        std::unique_ptr<AbstractProduct> createProduct() override;
};

#endif









