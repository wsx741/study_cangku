#ifndef TEMPLATE_METHOD_H
#define TEMPLATE_METHOD_H

class Calc{
    public:
        void run();

    protected:
        void input();
        virtual void exec() = 0;
        void show();

        double a,b,res = 0;
};
class AddCalc : public Calc{
    protected:
        void exec() override;
};
class SubCalc : public Calc{
    protected:
        void exec() override;
};

#endif





