//
// Created by lzy on 2022/10/3.
//


#include "iostream"
#include "string"

using namespace std;

int main(){
    string name;
    cin>>name;
    cout<<"name is "<<name<<scientific<<endl;

    // 标准错误输出
    cerr<<"ERROR IS GOGOGO"<< endl;
    //日志输出
    clog<<"clog 日志输出"<<endl;
}