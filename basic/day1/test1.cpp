//
// Created by lzy on 2022/10/2.
//

#include "iostream"
#include "limits"
using namespace std;

void printType();

int main(){
    printType();
    return 0;
}

void printType(){
    cout << "type \t\t"<<"*********************size*********************"<<endl;
    cout << "bool :\t\t"<< "��ռ�ֽ�����"<< sizeof(bool)<<"\n";
    cout << "\t\tbool �����ֵ��"<<(numeric_limits<bool>::max)()<<"\n";
    cout << "\t\tbool ����Сֵ��"<<(numeric_limits<bool>::min)()<<endl;
    cout << "\t\tfloat��ռ���ֽ���:"<< sizeof(float)<<endl;
    cout << "\t\tfloat�����ֵ��"<<(numeric_limits<float>::max)()<<endl;
    cout << "\t\tfloat����Сֵ��"<<(numeric_limits<float>::min)()<<endl;
}