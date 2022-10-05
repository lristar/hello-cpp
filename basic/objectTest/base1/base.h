//
// Created by lzy on 2022/10/4.
//

#ifndef HELLO_CPP_BASE_H
#define HELLO_CPP_BASE_H

#include "iostream"
#include "cstring"
// 类的访问修饰符号
// public 公有，
// private 私有
// protected 受保护成员

class base {
public:
    double length;
    // 成员函数的声明和实现
    void setLength( double len ){
        length = len;
    }
    double getLength( void ){
        return length;
    }
};

class Box {
    //默认情况下，类的所有成员都是私有的
    double width;
    public:
        double length;
        void setWidth(double wid);
        double getWidth(void);
    //  也可以向以下声明定义私有成员
    private:
        double width2;
};

void Box::setWidth(double wid) {
    width = wid;
}

double Box::getWidth() {
    return width;
}

class Student {
    protected:
        std::string name;
        std::string _class;
        int age;
};

class MidStudent:Student{
    public:
        void setStudent(std::string na,std::string cls,int ag){
            name = na;
            _class = cls,
            age = ag;
        }
        void printBody(){
            std::cout<<"name is "<<name<<"\n";
            std::cout<<"class name is "<<_class<<"\n";
            std::cout<<"age is "<<age<<"\n";
        }
};

#endif //HELLO_CPP_BASE_H
