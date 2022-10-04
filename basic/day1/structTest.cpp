//
// Created by lzy on 2022/10/4.
//
#include "iostream"
#include "string"
using namespace std;
typedef struct Books{
    string title;
    string name;
    string author;
    string subject;
    int book_id;
} Books;
void printBooks(Books& book);

int main(){
    Books book1 = Books{"书","第一本数树","王五","教育",10};
    Books book2 = Books{"书","第二本书","张三","教育",9};

    // 输出 Book1 信息
    cout << "第一本书标题 : " << book1.title <<endl;
    cout << "第一本书作者 : " << book1.author <<endl;
    cout << "第一本书类目 : " << book1.subject <<endl;
    cout << "第一本书 ID : " << book1.book_id <<endl;

    // 输出 Book2 信息
    cout << "第二本书标题 : " << book2.title <<endl;
    cout << "第二本书作者 : " << book2.author <<endl;
    cout << "第二本书类目 : " << book2.subject <<endl;
    cout << "第二本书 ID : " << book2.book_id <<endl;
    printBooks(book1);

    return 0;
}

// 将结构体作为函数参数

void printBooks(Books &book){
    cout <<"进入printBooks"<<endl;
    cout << "第一本书标题 : " << book.title <<endl;
    cout << "第一本书作者 : " << book.author <<endl;
    cout << "第一本书类目 : " << book.subject <<endl;
    cout << "第一本书 ID : " << book.book_id <<endl;
}