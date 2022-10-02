//
// Created by lzy on 2022/10/2.
//
// 指针的学习
#include <iostream>

using namespace std;

using namespace std;
const int MAX = 3;
void ptr_get();

int main ()
{
    int  var[MAX] = {10, 100, 200};
    int *pstr = var;
    for (int i = 0; i < MAX; i++)
    {
        // *var一直指向的是数组第一个数值
//        *var = i;    // 这是错误的用法
//        var++;
        *pstr = i;    // 这是正确的语法
        pstr++;
    }
    cout<<var[0]<<","<<var[1]<<","<<var[2]<<endl;


    /*-----------------------------------------------------------*/
    ptr_get();
    return 0;
}

// 引用为什么比指针安全，因为在函数传递过程中，指针可以被改变，被重新定义，但引用是只能在变量创建的时候生成，之后都是不变的地址，所以在函数传递的时候，通常用引用传值代替指针传值
// 推荐使用引用
void ptr_get(){
    int    i;
    double d;

    // 声明引用变量
    int&    r = i;
    double& s = d;

    i = 5;
    cout << "Value of i : " << i << endl;
    cout << "Value of i reference : " << r  << endl;

    d = 11.7;
    cout << "Value of d : " << d << endl;
    cout << "Value of d reference : " << s  << endl;

    s = 11;
    cout << "Value of d : " << d << endl;
    cout << "Value of d reference : " << s  << endl;
}