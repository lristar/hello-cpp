//
// Created by lzy on 2022/10/4.
//

#include "Box.h"
#include "iostream"
#include "cstring"

using namespace std;
// 这里要初始化这个静态变量

int main(){
    // new创建出来的是指针类型 new出来的是在堆区,需要手动调用delete释放
    // Box* box1 = new Box(5.0,6.0,7.0);
    // Box* box2 = new Box(5.0,6.0,7.0);
    // // 获取box1的引用
    // Box &box3 = *box1;
    // double volume = 0.0;

    // // box 1 
    // volume = box1->height * box1->length * box1->length;
    // cout << "Box1\t" << volume <<endl;

    // // box 2 
    // volume = box2->height * box2->length * box2->breadth;
    // cout << "Box2\t" << volume <<endl;
    // box3.set(1.0,2.0,3.0);
    // volume = box3.height * box3.length * box3.breadth;
    // cout << "Box3\t" << volume <<endl;
    // // 释放box1和box2的内存
    // delete box1;
    // delete box2;

    // 普通方式 这种方式会自动调用析构函数 这种方式是在栈区,程序结束会自动释放
    Box box1(5.0,6.0,7.0);
    Box box2(5.0,6.0,7.0);
    Box box3 = box1 + box2;
    double volume = 0.0;
    volume = box1.sum();
    cout << "Box1\t" << volume <<endl;
    printWidth(box1);

    // box 2 
    volume = box2.sum();
    cout << "Box2\t" << volume <<endl;
    volume = box3.sum();
    cout << "Box3\t" << volume <<endl;
    // 通过类名调用静态函数
    int aa = Box::getCount();
    cout<<"aa is "<<aa<<endl;
    // 通过对象名调用静态函数
    int bb = box1.getCount();
    cout<<"bb is "<<bb<<endl;
    Box box4 = box3-box1;
    volume = box4.sum();
    cout << "box4\t" << volume <<endl;
    return 0;
}