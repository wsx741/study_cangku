#include "ex1.h"
using namespace std;

int main() {
    // 创建管理员用户代理
    cout << "\n1. Admin user accessing document:" << endl;
    Document* adminProxy = new DocumentProxy("confidential.doc", UserType::ADMIN);
    adminProxy->view();
    adminProxy->edit();
    
    // 创建普通用户代理
    cout << "\n2. Normal user accessing document:" << endl;
    Document* userProxy = new DocumentProxy("confidential.doc", UserType::NORMAL);
    userProxy->view();
    userProxy->edit();
    
    // 清理资源
    delete adminProxy;
    delete userProxy;
    
    return 0;
}