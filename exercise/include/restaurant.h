#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <iostream>
#include <vector>
#include <string>

// Receiver - 厨师类
class Chef {
public:
    void cookKungPaoChicken();
    void cookFishFlavoredShreddedPork();
};

// Command - 抽象命令类
class Command {
public:
    virtual ~Command() {}
    virtual void execute() = 0;
protected:
    Command(Chef* chef) : chef(chef) {}
    Chef* chef;
};

// ConcreteCommand - 宫保鸡丁命令类
class KungPaoChickenCmd : public Command {
public:
    KungPaoChickenCmd(Chef* chef) : Command(chef) {}
    void execute() override;
};

// ConcreteCommand - 鱼香肉丝命令类
class FishFlavoredShreddedPorkCmd : public Command {
public:
    FishFlavoredShreddedPorkCmd(Chef* chef) : Command(chef) {}
    void execute() override;
};

// Invoker - 服务员类
class Waiter {
public:
    void addCommand(Command* command);
    void submitOrder();
private:
    std::vector<Command*> orders;
};

#endif // RESTAURANT_H