namespace std{
class mutex;
}
//懒汉式1
class A{
    protected:
        A() = default;
        A(const A &) = delete;
        A operator=(const A &) = delete;

    public:
        static A *getObject();
        void show();

    protected:
        static A *obj;
        static std::mutex *lock;
};
//饿汉式2
class B{
    protected:
        B() = default;
        B(const B &) = delete;
        B operator=(const B &) = delete;

    public:
        static B &getObject();
};
//饿汉式
class C{
    protected:
        C() = default;
        C(const C &) = delete;
        C operator=(const C &) = delete;

    public:
        static C *getObject();
        void show();

    protected:
        static C *obj;
};










