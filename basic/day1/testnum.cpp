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

    // 设置种子
    srand( (unsigned)time( NULL ) );
    for (i=0;i<10;i++){
        j = rand();
        cout<<"随机数"<<i<<"的值是:"<<j<<endl;
    }
    return 0;
}