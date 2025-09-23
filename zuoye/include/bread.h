#ifndef BREAD_H
#define BREAD_H

#include <iostream>
using namespace std;

// 抽象基类 Bread
class Bread {
public:
    // 模板方法 bake()
    void bake();
    
protected:
    // 具体步骤方法
    virtual void preheat();
    virtual void mix() = 0;  // 纯虚函数，由子类实现
    virtual void bakeBread() = 0;  // 纯虚函数，由子类实现
    virtual void cool();
};

// 白面包子类
class WhiteBread : public Bread {
protected:
    void mix() override;
    void bakeBread() override;
};

// 全麦面包子类
class WholeWheatBread : public Bread {
protected:
    void mix() override;
    void bakeBread() override;
};

#endif // BREAD_H