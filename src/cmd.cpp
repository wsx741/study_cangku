#include <iostream>
using namespace std;

class Light{
    public:
        void on(){
            cout << "Light on" << endl;
        }
        void off(){
            cout << "Light off" << endl;
        }
};
class Fan{
    public:
        void on(){
            cout << "Fan on" << endl;
        }
        void off(){
            cout << "Fan off" << endl;
        }
        void move(){
            cout << "Fan move" << endl;
        }
};

class Cmd{
    public:
        virtual ~Cmd() = default;
        virtual void exec() = 0;
};

class LON : public Cmd{
    public:
        LON(Light *l) : l(l) {}
        void exec() override{
            l->on();
        }
    protected:
        Light *l;
};
class LOFF : public Cmd{
    public:
        LOFF(Light *l) : l(l) {}
        void exec() override{
            l->off();
        }
    protected:
        Light *l;
};
class FON : public Cmd{
    public:
        FON(Fan *f) : f(f) {}
        void exec() override{
            f->on();
        }
    protected:
        Fan *f;
};
class FOFF : public Cmd{
    public:
        FOFF(Fan *f) : f(f) {}
        void exec() override{
            f->off();
        }
    protected:
        Fan *f;
};
class FMove : public Cmd{
    public:
        FMove(Fan *f) : f(f) {}
        void exec() override{
            f->move();
        }
    protected:
        Fan *f;
};

class App{
    public:
        App(Cmd *arr[]){
            for(int i = 0; i < 5; i++)
                this->arr[i] = arr[i];
        }
        void btn1(){
            arr[0]->exec();
        }
        void btn2(){
            arr[1]->exec();
        }

    protected:
        Cmd *arr[5];
};

int main(){
    Light l;
    Fan f;
    Cmd *arr[5];
    arr[0] = new LON(&l);
    arr[1] = new LOFF(&l);
    arr[2] = new FON(&f);
    arr[3] = new FOFF(&f);
    arr[4] = new FMove(&f);
    App a(arr);
    a.btn1();
    a.btn2();
    return 0;
}








