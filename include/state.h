#ifndef STATE_H
#define STATE_H

class LightState{
    public:
        virtual ~LightState() = default;
        virtual void pressButton() = 0;
};

class LightOFF : public LightState{
    public:
        void pressButton() override;
};

class LightON : public LightState{
    public:
        void pressButton() override;
};

class LightContext{
    public:
        LightContext(LightState *s);
        void setState(LightState *s);
        void exec();

    protected:
        LightState *s;
};

#endif






