//
// Created by lzy on 2022/10/2.
//

#include "iostream"
#include "cstdlib"
#include "cmath"
#include "ctime"
using namespace std;

int main(){
    cout<<"sqrt(123412.32532) is "<<sqrt(123412.32532)<<endl;
    int i,j;

    // ��������
    srand( (unsigned)time( NULL ) );
    for (i=0;i<10;i++){
        j = rand();
        cout<<"�����"<<i<<"��ֵ��:"<<j<<endl;
    }
    return 0;
}