#ifndef SINGLETEN_FACTORY_H
#define SINGLETEN_FACTORY_H
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
    protected:
        Factory() = default;
        Factory(const Factory &) = delete;
        Factory operator=(const Factory &) = delete;

    public:
        static Factory *getObject();
        std::unique_ptr<AbstractProduct> createProduct(int type);

    protected:
        static Factory *obj;
};

#endif









