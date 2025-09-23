#include "ex1.h"

using namespace std;
// RealDocument实现
RealDocument::RealDocument(const string& filename) 
    : filename(filename), content("This is the content of " + filename) {
}

void RealDocument::view() {
    cout << "Viewing document: " << filename << endl;
    cout << "Content: " << content << endl;
}

void RealDocument::edit() {
    cout << "Editing document: " << filename << endl;
    cout << "Current content: " << content << endl;
}

void RealDocument::setContent(const string& newContent) {
    content = newContent;
}

string RealDocument::getContent() const {
    return content;
}

// DocumentProxy实现
DocumentProxy::DocumentProxy(const string& filename, UserType userType) 
    : filename(filename), userType(userType), realDocument(new RealDocument(filename)) {
}

DocumentProxy::~DocumentProxy() {
    delete realDocument;
}

void DocumentProxy::view() {
    // 所有用户都可以查看文档
    realDocument->view();
}

void DocumentProxy::edit() {
    // 只有管理员可以编辑文档
    if (userType == UserType::ADMIN) {
        realDocument->edit();
    } else {
        cout << "Access denied: Only administrators can edit documents." << endl;
    }
}