#ifndef EX1_H
#define EX1_H

#include <string>
#include <iostream>

using namespace std;
// 用户类型枚举
enum class UserType {
    ADMIN,     // 管理员
    NORMAL     // 普通用户
};

// Document基类 - 定义文档的基本操作接口
class Document {
public:
    virtual ~Document() = default;
    virtual void view() = 0;   // 查看文档
    virtual void edit() = 0;   // 编辑文档
};

// RealDocument类 - 实现实际的文档功能
class RealDocument : public Document {
private:
    string content;    // 文档内容
    string filename;   // 文件名

public:
    RealDocument(const string& filename);
    void view() override;
    void edit() override;
    void setContent(const string& newContent);
    string getContent() const;
};

// DocumentProxy类 - 作为保护代理控制对文档的访问权限
class DocumentProxy : public Document {
private:
    RealDocument* realDocument;  // 真实文档对象
    UserType userType;           // 用户类型
    string filename;        // 文件名

public:
    DocumentProxy(const string& filename, UserType userType);
    ~DocumentProxy();
    void view() override;
    void edit() override;
};

#endif