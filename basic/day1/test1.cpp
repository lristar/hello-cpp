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
    cout << "bool :\t\t"<< "所占字节数，"<< sizeof(bool)<<"\n";
    cout << "\t\tbool 的最大值是"<<(numeric_limits<bool>::max)()<<"\n";
    cout << "\t\tbool 的最小值是"<<(numeric_limits<bool>::min)()<<endl;
    cout << "\t\tfloat所占的字节数:"<< sizeof(float)<<endl;
    cout << "\t\tfloat的最大值是"<<(numeric_limits<float>::max)()<<endl;
    cout << "\t\tfloat的最小值是"<<(numeric_limits<float>::min)()<<endl;
}