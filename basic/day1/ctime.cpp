//
// Created by lzy on 2022/10/3.
//

#include "ctime"
#include "iostream"
#include "string"
using namespace std;

void test_tm();

int main(){
    // ���ڵ�ǰϵͳ�ĵ�ǰ����/ʱ��
    time_t now = time(0);

    // �� now ת��Ϊ�ַ�����ʽ
    string dt = ctime(&now);

    cout << "�������ں�ʱ�䣺" << dt << endl;

    // �� now ת��Ϊ tm �ṹ
//    struct tm gmtm;
//    gmtime_s(,&now);
//    dt = asctime(gmtm);
//    cout << "UTC ���ں�ʱ�䣺"<< dt << endl;
    test_tm();
}

void test_tm(){
    time_t now = time(0);
    tm *ltm = localtime(&now);
    cout<<"�꣺"<<ltm->tm_year+1900<<endl;
    cout<<"��,"<<1+ ltm->tm_mon<<endl;
    cout<<"�գ�"<<ltm->tm_mday<<endl;
    cout << "ʱ��: "<< ltm->tm_hour << ":";
    cout << ltm->tm_min << ":";
    cout << ltm->tm_sec << endl;
    char resultTime[50] ;
    strftime(resultTime,50,"%x - %I:%M%p",ltm);
    cout<<"resultTime is "<<resultTime<<endl;
}