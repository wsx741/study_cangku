#ifndef SIMPLE_FACTORY_H
#define SIMPLE_FACTORY_H
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

class Factory{
    public:
        std::unique_ptr<AbstractProduct> createProduct(int type);
};

#endif









