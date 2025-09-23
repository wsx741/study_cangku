#ifndef ABSTRACT_FACTORY_H
#define ABSTRACT_FACTORY_H
#include <memory>
class ABApple{
    public:
        virtual ~ABApple() = default;
        virtual void show() = 0;
};

class ChinaApple : public ABApple{
    public:
        void show() override;
};
class USAApple : public ABApple{
    public:
        void show() override;
};
class JapanApple : public ABApple{
    public:
        void show() override;
};

class ABBanana{
    public:
        virtual ~ABBanana() = default;
        virtual void show() = 0;
};

class ChinaBanana : public ABBanana{
    public:
        void show() override;
};
class USABanana : public ABBanana{
    public:
        void show() override;
};
class JapanBanana : public ABBanana{
    public:
        void show() override;
};

class ABPear{
    public:
        virtual ~ABPear() = default;
        virtual void show() = 0;
};

class ChinaPear : public ABPear{
    public:
        void show() override;
};
class USAPear : public ABPear{
    public:
        void show() override;
};
class JapanPear : public ABPear{
    public:
        void show() override;
};

class ABFactory{
    public:
        virtual ~ABFactory() = default;
        virtual std::unique_ptr<ABApple> createApple() = 0;
        virtual std::unique_ptr<ABBanana> createBanana() = 0;
        virtual std::unique_ptr<ABPear> createPear() = 0;
};
class ChinaFactory : public ABFactory{
    public:
        std::unique_ptr<ABApple> createApple() override;
        std::unique_ptr<ABBanana> createBanana() override;
        std::unique_ptr<ABPear> createPear() override;
};
class USAFactory : public ABFactory{
    public:
        std::unique_ptr<ABApple> createApple() override;
        std::unique_ptr<ABBanana> createBanana() override;
        std::unique_ptr<ABPear> createPear() override;
};
class JapanFactory : public ABFactory{
    public:
        std::unique_ptr<ABApple> createApple() override;
        std::unique_ptr<ABBanana> createBanana() override;
        std::unique_ptr<ABPear> createPear() override;
};


#endif









