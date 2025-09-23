#include <iostream>
#include <string>
using namespace std;

class Tea{
    public:
        virtual ~Tea() = default;
        virtual string desc() = 0;
        virtual double cost() = 0;
};

class GreenTea : public Tea{
    public:
        string desc() override{
            return "Green Tea";
        }
        double cost() override{
            return 5;
        }
};

class BlackTea : public Tea{
    public:
        string desc() override{
            return "Black Tea";
        }
        double cost() override{
            return 6;
        }
};

class WhiteTea : public Tea{
    public:
        string desc() override{
            return "White Tea";
        }
        double cost() override{
            return 6.5;
        }
};

class TeaDecorator : public Tea{
    protected:
        Tea *t = nullptr;

    public:
        TeaDecorator(Tea *t)
            : t(t)
        {}
        ~TeaDecorator(){
            if(t){
                delete t;
                t = nullptr;
            }
        }
};

class Mango : public TeaDecorator{
    public:
        Mango(Tea *t)
            : TeaDecorator(t)
        {}
        string desc(){
            return t->desc() + ", Mango";
        }
        double cost(){
            return t->cost() + 1;
        }
};

class Watermelon : public TeaDecorator{
    public:
        Watermelon(Tea *t)
            : TeaDecorator(t)
        {}
        string desc(){
            return t->desc() + ", Watermelon";
        }
        double cost(){
            return t->cost() + 1.5;
        }

};

class Lemon : public TeaDecorator{
    public:
        Lemon(Tea *t)
            : TeaDecorator(t)
        {}
        string desc(){
            return t->desc() + ", Lemon";
        }
        double cost(){
            return t->cost() + 0.5;
        }

};

int main()
{
    Tea *p1 = new Lemon(new GreenTea());
    cout << p1->desc() << endl;
    cout << p1->cost() << endl;
    delete p1;
    return 0;
}





