//
// Created by lzy on 2022/10/3.
//

#include "ctime"
#include "iostream"
#include "string"
using namespace std;

void test_tm();

int main(){
    // 基于当前系统的当前日期/时间
    time_t now = time(0);

    // 把 now 转换为字符串形式
    string dt = ctime(&now);

    cout << "本地日期和时间：" << dt << endl;

    // 把 now 转换为 tm 结构
//    struct tm gmtm;
//    gmtime_s(,&now);
//    dt = asctime(gmtm);
//    cout << "UTC 日期和时间："<< dt << endl;
    test_tm();
}

void test_tm(){
    time_t now = time(0);
    tm *ltm = localtime(&now);
    cout<<"年："<<ltm->tm_year+1900<<endl;
    cout<<"月,"<<1+ ltm->tm_mon<<endl;
    cout<<"日，"<<ltm->tm_mday<<endl;
    cout << "时间: "<< ltm->tm_hour << ":";
    cout << ltm->tm_min << ":";
    cout << ltm->tm_sec << endl;
    char resultTime[50] ;
    strftime(resultTime,50,"%x - %I:%M%p",ltm);
    cout<<"resultTime is "<<resultTime<<endl;
}