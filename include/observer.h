#ifndef OBSERVER_H
#define OBSERVER_H

#include <vector>
//观察者
class Observer{
    public:
        virtual ~Observer() = default;
        virtual void update(double te, double hu) = 0;
};
//主题、被观察者
class Subject{
    public:
        virtual ~Subject() = default;
        virtual void registerObserver(Observer *os) = 0;
        virtual void removeObserver(Observer *os) = 0;
        virtual void notifyObservers() = 0;
};
//主题：气象站
class WeatherStation : public Subject{
    public:
        void registerObserver(Observer *os) override;
        void removeObserver(Observer *os) override;
        void notifyObservers() override;
        void setData(double te, double hu);

    protected:
        std::vector<Observer *> oss;
        double te;
        double hu;
};
//观察者
class OSA : public Observer{
    public:
        void update(double te, double hu) override;
        
    protected:
        void disp();
        double te;
};
class OSB : public Observer{
    public:
        void update(double te, double hu) override;
    protected:
        void disp();
        double hu;
};




#endif




