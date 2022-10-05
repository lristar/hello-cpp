//
// Created by lzy on 2022/10/4.
//

#ifndef HELLO_CPP_ANIMAL_H
#define HELLO_CPP_ANIMAL_H

#include "iostream"

using namespace std;

class Animal {
protected:
    void eat(){
        cout<<"animal eat"<<endl;
    }

    void sleep(){
        cout<< "animal sleep"<<endl;
    }
};


// 公有继承
class Dog:public Animal{
public:
    void bark(){
        cout<<"wang wang"<<endl;
    }
    // 外部无法访问派生的protect的成员函数，需要一个public的外部函数来去做
    void GetAll(){
        eat();
        sleep();
    }
};

// 多继承的实例
class Shape{
public:
    void setWidth(int w){
        width = w;
    }

    void setHeight(int h ){
        height = h;
    }

protected:
    int width;
    int height;
};

class PaintCost {
public:
    int getCost(int area){
        return area;
    };
};

// 多继承派生类
class Rectangle:public Shape, public PaintCost{
public:
    int getArea(){
        return (width*height);
    }
};

template <typename T>

class printData {
public:
    void print(T i) {
        cout << "类型是:"<<typeid(i).name()<<"是"<< i << endl;
    }
//
//    void print(double  f) {
//        cout << "浮点数为: " << f << endl;
//    }
//
//    void print(char c[]) {
//        cout << "字符串为: " << c << endl;
//    }
};

#endif //HELLO_CPP_ANIMAL_H

