
//目标接口
class Target{
    public:
        virtual ~Target() = default;
        virtual void test() = 0;
};

//源接口
class Adaptee{
    public:
        void check();
};

//适配器
class Adapter : public Target{
    public:
        Adapter(Adaptee *ad);
        void test() override;

    protected:
        Adaptee *ad = nullptr;
};







