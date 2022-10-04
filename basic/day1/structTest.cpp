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
    Books book1 = Books{"��","��һ������","����","����",10};
    Books book2 = Books{"��","�ڶ�����","����","����",9};

    // ��� Book1 ��Ϣ
    cout << "��һ������� : " << book1.title <<endl;
    cout << "��һ�������� : " << book1.author <<endl;
    cout << "��һ������Ŀ : " << book1.subject <<endl;
    cout << "��һ���� ID : " << book1.book_id <<endl;

    // ��� Book2 ��Ϣ
    cout << "�ڶ�������� : " << book2.title <<endl;
    cout << "�ڶ��������� : " << book2.author <<endl;
    cout << "�ڶ�������Ŀ : " << book2.subject <<endl;
    cout << "�ڶ����� ID : " << book2.book_id <<endl;
    printBooks(book1);

    return 0;
}

// ���ṹ����Ϊ��������

void printBooks(Books &book){
    cout <<"����printBooks"<<endl;
    cout << "��һ������� : " << book.title <<endl;
    cout << "��һ�������� : " << book.author <<endl;
    cout << "��һ������Ŀ : " << book.subject <<endl;
    cout << "��һ���� ID : " << book.book_id <<endl;
}