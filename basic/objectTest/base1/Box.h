//
// Created by lzy on 2022/10/4.
//

#ifndef HELLO_CPP_BOX_H
#define HELLO_CPP_BOX_H


class Box {
public:
    double length;
    double breadth;
    double height;

    // 成员函数声明
    double get(void){
        return length * breadth * height;
    }
    void set(double len,double bre,double hei){
        length = len;
        breadth = bre;
        height = hei;
    }
};

// 您也可以在类的外部使用范围解析运算符 :: 定义该函数，如下所示：
// 实现可以放外边也可以放里面
// 成员函数实现
//double Box::get(void) {
//    return length * breadth * height;
//}
//
//void Box::set( double len, double bre, double hei)
//{
//    length = len;
//    breadth = bre;
//    height = hei;
//}

#endif //HELLO_CPP_BOX_H
